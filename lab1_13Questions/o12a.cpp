#include <iostream>
#include <cmath>   // For std::abs and std::pow
#include <iomanip> // For std::fixed and std::setprecision

int main() {
    double x;
    std::cout << "--- Series Evaluation ---" << std::endl;
    std::cout << "Enter a value for x to evaluate the series: ";
    std::cin >> x;

    // Use an accuracy value of 0.000001 which is 0.0001% of 1.
    const double accuracy = 0.000001;

    // --- (a) sin(x) series evaluation ---
    std::cout << "\n(a) Evaluating sin(x) = x - x^3/3! + x^5/5! - ..." << std::endl;
    double sin_result = 0.0;
    
    // Convert x from degrees to radians for the trigonometric series.
    const double PI = 3.14159265358979323846;
    double x_radians = x * (PI / 180.0);
    
    double term_sin = x_radians;
    int n = 1;

    do {
        sin_result += term_sin;
        // Calculate the next term by modifying the previous one.
        term_sin = -term_sin * (x_radians * x_radians) / ((n + 1) * (n + 2));
        n += 2;
    } while (std::abs(term_sin) >= accuracy);
    
    std::cout << "sin(" << x << " degrees) = " << std::fixed << std::setprecision(6) << sin_result << std::endl;

    // --- (b) SUM series evaluation ---
    std::cout << "\n(b) Evaluating SUM = 1 + (1/2)^2 + (1/3)^3 + ..." << std::endl;
    double sum_result = 0.0;
    double term_sum = 1.0;
    int i = 1;

    while (std::abs(term_sum) >= accuracy) {
        sum_result += term_sum;
        i++;
        // Calculate the next term in the series.
        term_sum = std::pow(1.0 / i, i);
    }
    std::cout << "SUM = " << std::fixed << std::setprecision(6) << sum_result << std::endl;
    
    // --- (c) cos(x) series evaluation ---
    std::cout << "\n(c) Evaluating cos(x) = 1 - x^2/2! + x^4/4! - ..." << std::endl;
    double cos_result = 0.0;
    
    // Use the same radians conversion for the cos(x) series.
    double term_cos = 1.0;
    int j = 0;
    
    do {
        cos_result += term_cos;
        j += 2;
        // Calculate the next term by modifying the previous one.
        term_cos = -term_cos * (x_radians * x_radians) / (static_cast<double>(j) * (j - 1));
    } while (std::abs(term_cos) >= accuracy);

    std::cout << "cos(" << x << " degrees) = " << std::fixed << std::setprecision(6) << cos_result << std::endl;

    return 0;
}
