#include <iostream>
#include <cmath>
using namespace std;

class Shape {
    protected:
        string name;

    public:
        Shape(string name): name(name){}

        virtual double area() = 0;

        virtual void info() = 0;
};

class Circle : public Shape {
    protected:
        double radius;

    public:
        Circle(string name, double radius): Shape(name), radius(radius){}

        double area() override {
            return M_PI * pow(radius, 2);
        }

        void info() override {
            cout << name << ": [ Radius: " << radius << ", Area: " << area() << " ]" << endl;
        }
};

class Cylinder : public Circle {
    protected:
        double length;

    public:
        Cylinder(string name, double radius, double length): Circle(name, radius), length(length){}

        double area() override {
            return 2 * Circle::area() + 2 * M_PI * radius * length;
        }

        double volume() {
            return Circle::area() * length;
        }

        void info() override {
            cout << name << ": [ Radius: " << radius << ", Length:" << length << ", Area: " << area() << ", Volume: " << volume() << " ]" << endl;
        }
};

class Rectangle : public Shape {
    protected:
        double width;
        double height;

    public:
        Rectangle(string name, double width, double height): Shape(name), width(width), height(height){}

        double area() override {
            return width * height;
        }

        void info() override {
            cout << name << ": [ Width: " << width << ", Height: " << height << ", Area: " << area() << " ]" << endl;
        }
};

class Polygon : public Rectangle {
    protected:
        int n;

    public:
        Polygon(string name, double width, double height, int n): Rectangle(name, width, height), n(n){}

        double area() override {
            return 0.5 * width * height * n;
        }

        double volume() {
            return area() * n;
        }

        void info() override {
            cout << name << ": [ Width: " << width << ", Height: " << height << ", N: " << n << ", Area: " << area() << ", Volume: " << volume() << " ]" << endl;
        }
};