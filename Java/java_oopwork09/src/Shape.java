public abstract class Shape {
    protected String name;

    public Shape(String name) {
        this.name = name;
    }

    abstract double area();
    abstract void info();
}

class Circle extends Shape {
    protected double radius;

    public Circle(String name, double radius) {
        super(name);
        this.radius = radius;
    }

    @Override
    public double area(){
        return Math.PI * Math.pow(radius, 2);
    }

    @Override
    public void info(){
        System.out.println(name + ": [ Radius: " + radius + ", Area: " + area() + " ]");
    }
}

class Cylinder extends Circle {
    protected double length;

    public Cylinder(String name, double radius, double length) {
        super(name, radius);
        this.length = length;
    }

    @Override
    public double area(){
        return 2 * super.area() + 2 * Math.PI * radius * length;
    }

    public double volume() {
        return super.area() * length;
    }

    @Override
    public void info() {
        System.out.println(name + ": [ Radius: " + radius + ", Length: " + length + ", Area: " + area() + ", Volume: " + volume() + " ]");   
    }
}

class Rectangle extends Shape {
    protected double width;
    protected double height;

    public Rectangle(String name, double widht, double height) {
        super(name);
        this.width = widht;
        this.height = height;
    }

    @Override
    public double area() {
        return width * height;
    }

    @Override
    public void info() {
        System.out.println(name + ": [ Width: " + width + ", Height: " + height + ", Area: " + area() + " ]");
    }

}

class Polygon extends Rectangle {
    protected int n;

    public Polygon(String name, double widht, double height, int n) {
        super(name, widht, height);
        this.n = n;
    }

    @Override
    public double area() {
        return 0.5 * width * height * n;
    }

    public double volume() {
        return super.area() * height;
    }

    @Override
    public void info() {
        System.out.println(name + ": [ Widht: " + width + ", Height: " + height + ", Area: " + area() + ", Volume: " + volume() + " ]");
    }
}