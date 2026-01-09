import a.Color;
import a.Size;

public class Main {
    public static void main(String[] args) throws Exception {
        var cir1 = new Circle("Circle", 10.0);
        cir1.info();

        var cy1 = new Cylinder("Cylinder", 3.0, 5.0);
        cy1.info();

        var rec1 = new Rectangle("Rectangle", 5.0, 4.0);
        rec1.info();

        var po1 = new Polygon("Polygon", 4.0, 3.0, 5);
        po1.info();

        var dog1 = new ThaiRidgeBack(Color.BROWN, Size.MEDIUM, 5, false, "Thailand");
        dog1.info();

        var bird1 = new HummingBird(Color.GREY, Size.SMALL, "Egg");
        bird1.info();

        var fish1 = new AngleFish(Color.WHITE, Size.MEDIUM, "Salt Sea", "Andaman");
        fish1.info();
    }
}
