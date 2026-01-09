namespace cs_oopwork09
{
    public abstract class Shape
    {
        protected string name;

        protected Shape(string name)
        {
            this.name = name;
        }

        public abstract double Area { get; }
        public abstract void info(); 
    }

    class Circle : Shape
    {
        protected double radius;

        public Circle(string name, double radius) : base(name)
        {
            this.radius = radius;
        }

        public override double Area => Math.PI * Math.Pow(radius, 2);

        public override void info()
        {
            System.Console.WriteLine($"{name}: [ Radius: {radius}, Area: {Area:N2} ]");
        }

    }

    class Cylinder : Circle
    {
        protected double length;

        public Cylinder(string name, double radius, double length) : base(name, radius)
        {
            this.length = length;
        }

        public override double Area => 2 * Math.PI * radius * (radius + length);

        public virtual double Volume => Math.PI * Math.Pow(radius, 2) * length;

        public override void info()
        {
            System.Console.WriteLine($"{name}: [ Radius: {radius}, Length: {length}, Area: {Area:N2}, Volume: {Volume:N2} ]");
        }
    }

    class Rectangle : Shape
    {
        protected double width;
        protected double height;

        public Rectangle(string name, double width, double height) : base(name)
        {
            this.width = width;
            this.height = height;
        }

        public override double Area => width * height;

        public override void info()
        {
            System.Console.WriteLine($"{name}: [ Width: {width}, Height: {height}, Area: {Area:N2} ]");
        }
    }

    class Polygon : Rectangle
    {
        protected int n;

        public Polygon(string name, double width, double height, int n) : base(name, width, height)
        {
            this.n = n;
        }

        public override double Area => 0.5 * width * height * n;

        public virtual double Volume => Area * n;

        public override void info()
        {
            System.Console.WriteLine($"{name}: [ Width: {width}, Height: {height}, Area: {Area:N2}, Volume: {Volume:N2} ]");
        }
    }
}