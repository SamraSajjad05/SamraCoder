#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;  // Pure virtual function for area
};

class Circle : public Shape
{
public:
    double radius;

    void area()  // No 'override' keyword
    {
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape
{
public:
    double length;
    double width;

    void area()  // No 'override' keyword
    {
        cout << "Rectangle Area: " << length * width << endl;
    }
};

class Triangle : public Shape
{
public:
    double base;
    double height;

    void area()  // No 'override' keyword
    {
        // Use basic formula for a triangle's area (base * height / 2)
        double area = (base * height) / 2;
        cout << "Triangle Area: " << area << endl;
    }
};

int main()
{
    Circle circle;
    circle.radius = 5.0;

    Rectangle rectangle;
    rectangle.length = 4.0;
    rectangle.width = 6.0;

    Triangle triangle;
    triangle.base = 3.0;  // Assumes a base for simplicity
    triangle.height = 4.0;  // Assumes a height for simplicity

    Shape* shapes[] = { &circle, &rectangle, &triangle };

    for (int i = 0; i < 3; ++i) {
        shapes[i]->area();
        cout << endl;
    }

    return 0;
}


