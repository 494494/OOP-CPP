#include <iostream>
using namespace std;

class shape
{
public:
    double a;
    double b;

    void get_data(double a, double b)
    {
        this->a = a;
        this->b = b;
    }

    virtual void Display_area()
    {
        cout << "Area = " << a * b << endl;
    }
};

class Triangle : public shape
{
public:
    Triangle(double a, double b)
    {
        this->a = a;
        this->b = b;
    }

    void Display_area() override
    {
        cout << "Area of Triangle = " << 0.5 * a * b << endl;
    }
};

class Rectangle : public shape
{
public:
    Rectangle(double a, double b)
    {
        this->a = a;
        this->b = b;
    }

    void Display_area() override
    {
        cout << "Area of Rectangle = " << a * b << endl;
    }
};

int main()
{
    Triangle T1(4, 6);
    T1.Display_area();

    Rectangle R1(5, 8);
    R1.Display_area();
}
