import a.*;

public abstract class Animal {
    protected Color color;
    protected Size size;

    public Animal(Color color, Size size) {
        this.color = color;
        this.size = size;
    }

    abstract String sound();

    abstract String eat();
}

abstract class Manmalia extends Animal {
    protected int numberofBabies;

    public Manmalia(Color color, Size size, int numberofBabies) {
        super(color, size);
        this.numberofBabies = numberofBabies;
    }

    abstract String run();
}

abstract class Dog extends Manmalia {
    protected boolean fierce;

    public Dog(Color color, Size size, int numberofBabies, boolean fierce) {
        super(color, size, numberofBabies);
        this.fierce = fierce;
    }

    abstract String bark();

    abstract String bite();
}

class ThaiRidgeBack extends Dog {
    protected String origin;

    public ThaiRidgeBack(Color color, Size size, int numberofBabies, boolean fierce, String origin) {
        super(color, size, numberofBabies, fierce);
        this.origin = origin;
    }

    @Override
    public String sound() {
        return "Woof";
    }

    @Override
    public String eat() {
        return "Meat";
    }

    @Override
    public String run() {
        return "Running";
    }

    @Override
    public String bark() {
        return "Bark";
    }

    @Override
    public String bite() {
        return "Bite";
    }

    public void info() {
        System.out.println("ThaiRidgeBack: [ Color: " + color + ", Size: " + size + ", Sound: " + sound() + ", Eat: "
                + eat() + ", Run: " + run() + ", Bark: " + bark() + ", Bite: " + bite() + ", Fierce: " + fierce + " ]");
    }
}

abstract class Aves extends Animal {

    public Aves(Color color, Size size) {
        super(color, size);
    }

    abstract String fly();
}

abstract class Bird extends Aves {
    protected String egg;

    public Bird(Color color, Size size, String egg) {
        super(color, size);
        this.egg = egg;
    }

}

class HummingBird extends Bird {

    public HummingBird(Color color, Size size, String egg) {
        super(color, size, egg);
    }

    @Override
    public String sound() {
        return "Chrip";
    }

    @Override
    public String eat() {
        return "Seed";
    }

    @Override
    public String fly() {
        return "Fly in the sky";
    }

    public void info() {
        System.out.println("HummingBird: [ Color: " + color + ", Size: " + size + ", Sound: " + sound() + ", Eat: "
                + eat() + ", Fly: " + fly() + " ]");
    }

}

abstract class Osteicthyes extends Animal {

    public Osteicthyes(Color color, Size size) {
        super(color, size);
    }

    abstract String swimming();

}

abstract class Fish extends Osteicthyes {
    protected String waterGroup;

    public Fish(Color color, Size size, String waterGroup) {
        super(color, size);
        this.waterGroup = waterGroup;
    }

}

class AngleFish extends Fish {
    protected String location;

    public AngleFish(Color color, Size size, String waterGroup, String location) {
        super(color, size, waterGroup);
        this.location = location;
    }

    @Override
    public String sound() {
        return "...";
    }

    @Override
    public String eat() {
        return "Plankton";
    }

    @Override
    public String swimming() {
        return "Swimming in the sea";
    }

    public void info() {
        System.out.println("AngleFish: [ Color: " + color + ", Size: " + size + ", Sound: " + sound() + ", Eat: "
                + eat() + ", Swimming: " + swimming() + ", Water Group: " + waterGroup + ", Location: " + location
                + " ]");
    }
}