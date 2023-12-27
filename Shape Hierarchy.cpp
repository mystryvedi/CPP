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

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }

    double perimeter() const override {
        return 2 * (length + width);
    }
};

// Derived class representing a circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14159 * radius * radius;
    }

    double perimeter() const override {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    // Create instances of Rectangle and Circle
    Rectangle rectangle(5.0, 3.0);
    Circle circle(2.5);

    // Display the area and perimeter of each shape
    std::cout << "Rectangle - Area: " << rectangle.area() << ", Perimeter: " << rectangle.perimeter() << std::endl;
    std::cout << "Circle - Area: " << circle.area() << ", Perimeter: " << circle.perimeter() << std::endl;

    return 0;
}
