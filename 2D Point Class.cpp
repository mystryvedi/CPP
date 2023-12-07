#include <iostream>
#include <cmath>

// Class representing a 2D point
class Point {
private:
    double x;
    double y;
public:
    // Constructor
    Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    // Getter methods
    double getX() const { return x; }
    double getY() const { return y; }

    // Method to calculate the distance between two points
    double distanceTo(const Point& otherPoint) const {
        double deltaX = x - otherPoint.getX();
        double deltaY = y - otherPoint.getY();
        return std::sqrt(deltaX * deltaX + deltaY * deltaY);
    }
};
