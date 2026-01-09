using cs_oopwork09.a;

namespace cs_oopwork09
{
    public abstract class Animal
    {
        protected Color color;
        protected Size size;

        protected Animal(Color color, Size size)
        {
            this.color = color;
            this.size = size;
        }

        public abstract string Sound();
        public abstract string Eat();

    }

    abstract class Mammalia : Animal
    {
        protected int NumberOfBabies;

        public Mammalia(Color color, Size size, int NumberOfBabies) : base(color, size)
        {
            this.NumberOfBabies = NumberOfBabies;
        }

    }

    abstract class Dog : Mammalia
    {
        protected bool fierce;

        public Dog(Color color, Size size, int NumberOfBabies, bool fierce) : base(color, size, NumberOfBabies)
        {
            this.fierce = fierce;
        }

        public abstract string Bark();
        public abstract string Bite();
    }

    class ThaiRidgeBack : Dog
    {
        protected string origin;

        public ThaiRidgeBack(Color color, Size size, int NumberOfBabies, bool fierce, string origin) : base(color, size, NumberOfBabies, fierce)
        {
            this.origin = origin;
        }

        public override string Sound() => "Woof!!!";


        public override string Eat() => "Meat";


        public override string Bark() => "Bark!!!";


        public override string Bite() => "Bite!!!";

        public void info() 
        { 
            System.Console.WriteLine($"ThaiRidgeBack: [ Color: {color}, Size: {size}, Sound: {Sound()}, Eat: {Eat()}, Bark: {Bark()}, Bite: {Bite()}, NumOfBabies: {NumberOfBabies}, Origin: {origin} ]"); 
        }
    }

    abstract class Aves : Animal
    {
        public Aves(Color color, Size size) : base(color, size)
        {
        }

        public abstract string Fly();
    }

    abstract class Bird : Aves
    {
        protected string egg;

        public Bird(Color color, Size size, string egg) : base(color, size)
        {
            this.egg = egg;
        }
    }

    class HummingBird : Bird
    {
        public HummingBird(Color color, Size size, string egg) : base(color, size, egg)
        {
        }

        public override string Sound() => "Chrip";

        public override string Eat() => "Seed";

        public override string Fly() => "Fly in the sky";

        public void info()
        {
            System.Console.WriteLine($"Humming Bird: [ Color: {color}, Size: {size}, Sound: {Sound()}, Eat: {Eat()}, Fly: {Fly()} Egg: {egg} ]");
        }
    }

    abstract class Osteicthys : Animal
    {
        protected Osteicthys(Color color, Size size) : base(color, size)
        {
        }

        public abstract string Swimming();
    }

    abstract class Fish : Osteicthys
    {
        protected string WaterGroup;

        protected Fish(Color color, Size size, string WaterGroup) : base(color, size)
        {
            this.WaterGroup = WaterGroup;
        }

    }

    class AngleFish : Fish
    {
        protected string location;

        public AngleFish(Color color, Size size, string WaterGroup, string location) : base(color, size, WaterGroup)
        {
            this.location = location;
        }

        public override string Sound() => "...";

        public override string Eat() => "Plankton";

        public override string Swimming() => "Swimming in the sea";

        public void info()
        {
            System.Console.WriteLine($"AngleFish: [ Color: {color}, Size: {size}, Sound: {Sound()}, Eat: {Eat()}, Swimming: {Swimming()}, WaterGroup: {WaterGroup}, Location: {location} ]");
        }
    }
}