#include <cmath>
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual ~Shape() = default;
};

class Circle : public Shape {
private:
    double radius;

public:
    explicit Circle(double value) : radius(value) {}
    double area() const override { return 3.14159 * radius * radius; }
    double perimeter() const override { return 2 * 3.14159 * radius; }
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double rectangleWidth, double rectangleHeight) : width(rectangleWidth), height(rectangleHeight) {}
    double area() const override { return width * height; }
    double perimeter() const override { return 2 * (width + height); }
};

int main() {
    vector<unique_ptr<Shape>> shapes;
    shapes.push_back(make_unique<Circle>(2));
    shapes.push_back(make_unique<Rectangle>(3, 4));
    for (const auto& shape : shapes) cout << shape->area() << ' ' << shape->perimeter() << '\n';
    return 0;
}
