#include <iostream>
#include <string>
#include <iomanip>

int main() {
    std::string user_name;
    double units_consumed;

    // Prompt for user name and units consumed.
    std::cout << "--- Electricity Bill Calculator ---" << std::endl;
    std::cout << "Enter user name: ";
    std::getline(std::cin >> std::ws, user_name); // Reads the full line, handling potential whitespace
    std::cout << "Enter number of units consumed: ";
    std::cin >> units_consumed;

    // Calculate charges based on tiered rates.
    double total_charges = 0.0;
    const double rate1_units = 100;
    const double rate2_units = 200;
    const double rate1_price = 0.60;
    const double rate2_price = 0.80;
    const double rate3_price = 0.90;

    if (units_consumed <= rate1_units) {
        total_charges = units_consumed * rate1_price;
    } else if (units_consumed <= rate1_units + rate2_units) {
        total_charges = (rate1_units * rate1_price) + ((units_consumed - rate1_units) * rate2_price);
    } else {
        total_charges = (rate1_units * rate1_price) + (rate2_units * rate2_price) + ((units_consumed - 300) * rate3_price);
    }

    // Apply minimum charge if total is less than Rs. 50.00.
    const double minimum_charge = 50.00;
    if (total_charges < minimum_charge) {
        total_charges = minimum_charge;
    }

    // Apply surcharge if total is more than Rs. 300.00.
    const double surcharge_threshold = 300.00;
    const double surcharge_rate = 0.15;
    if (total_charges > surcharge_threshold) {
        total_charges += total_charges * surcharge_rate;
    }

    // Print the final bill.
    std::cout << "\n--- Bill for " << user_name << " ---" << std::endl;
    std::cout << "Total Charges: Rs. " << std::fixed << std::setprecision(2) << total_charges << std::endl;

    return 0;
}