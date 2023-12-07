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
int main() {
    // Create two Point objects
    Point point1(1.0, 2.0);
    Point point2(4.0, 6.0);

    // Display the coordinates of the points
    std::cout << "Point 1: (" << point1.getX() << ", " << point1.getY() << ")\n";
    std::cout << "Point 2: (" << point2.getX() << ", " << point2.getY() << ")\n";

    // Calculate and display the distance between the points
    double distance = point1.distanceTo(point2);
    std::cout << "Distance between Point 1 and Point 2: " << distance << std::endl;

    return 0;
}
