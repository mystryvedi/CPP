#include <iostream>

// Base class representing a shape
class Shape {
public:
    virtual double area() const = 0; // Pure virtual function for area calculation
    virtual double perimeter() const = 0; // Pure virtual function for perimeter calculation
    virtual ~Shape() {} // Virtual destructor for polymorphic behavior
};

// Derived class representing a rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;
