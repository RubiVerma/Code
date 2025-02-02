#include <iostream>
#include <cmath>
#include <iomanip>
#include <memory>
#include <vector>

class Shape {
public:
    virtual double Area() const = 0; // Pure virtual function
    virtual ~Shape() {} // Virtual destructor
};

class Circle : public Shape {
private:
    double x, y, radius;

public:
    Circle(double x, double y, double r) : x(x), y(y), radius(r) {}

    double Area() const override {
        return M_PI * radius * radius; // Area of circle: pr²
    }
};

class Rectangle : public Shape {
private:
    double x1, y1, x2, y2;

public:
    Rectangle(double x1, double y1, double x2, double y2) : x1(x1), y1(y1), x2(x2), y2(y2) {}

    double Area() const override {
        return std::abs(x2 - x1) * std::abs(y2 - y1); // Area of rectangle: |width| * |height|
    }
};

class Triangle : public Shape {
private:
    double x1, y1, x2, y2, x3, y3;

public:
    Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
        : x1(x1), y1(y1), x2(x2), y2(y2), x3(x3), y3(y3) {}

    double Area() const override {
        // Area of triangle using the formula: |(x1(y2-y3) + x2(y3-y1) + x3(y1-y2)) / 2|
        return std::abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
    }
};

int main() {
    int q;
    std::cin >> q;
    std::vector<std::unique_ptr<circle>> shapes;

    // Create shapes based on input
    for (int i = 0; i < q; ++i) {
        int type;
        std::cin >> type;

        if (type == 1) { // Circle
            double x, y, r;
            std::cin >> x >> y >> r;
            shapes.push_back(std::make_unique<Circle>(x, y, r));
        } else if (type == 2) { // Rectangle
            double x1, y1, x2, y2;
            std::cin >> x1 >> y1 >> x2 >> y2;
            shapes.push_back(std::make_unique<Rectangle>(x1, y1, x2, y2));
        } else if (type == 3) { // Triangle
            double x1, y1, x2, y2, x3, y3;
            std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
            shapes.push_back(std::make_unique<Triangle>(x1, y1, x2, y2, x3, y3));
        }
    }

    // Output the areas of the shapes
    for (const auto& shape : shapes) {
        std::cout << std::fixed << std::setprecision(2) << shape->Area() << std::endl;
    }

    return 0;
}

