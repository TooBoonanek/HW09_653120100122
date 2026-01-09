namespace cs_oopwork09;

class Program
{
    static void Main(string[] args)
    {
        var cir1 = new Circle("Circle", 2.0);
        cir1.info();

        var cy1 = new Cylinder("Cylinder", 3.0, 4.0);
        cy1.info();

        var rec1 = new Rectangle("Rectangle", 3.0, 4.0);
        rec1.info();

        var po1 = new Polygon("Polygon", 2.0, 5.0, 6);
        po1.info();

        System.Console.WriteLine("================================================================================");
        var dog1 = new ThaiRidgeBack(a.Color.BROWN, a.Size.MEDIUM, 4, true, "Thailand");
        dog1.info();

        var bird1 = new HummingBird(a.Color.GREY, a.Size.SMALL, "Egg!!!");
        bird1.info();

        var fish1 = new AngleFish(a.Color.WHITESTRIPES, a.Size.SMALL, "Salt Sea", "Andaman");
        fish1.info();
    }
}