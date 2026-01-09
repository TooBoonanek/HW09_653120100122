#include <iostream>
#include "a/Color.cpp"
#include "a/Size.cpp"

using namespace std;

string toString(Color c)
{
    switch (c)
    {
    case Color::BLACK:
        return "BLACK";
    case Color::WHITE:
        return "WHITE";
    case Color::BROWN:
        return "BROWN";
    case Color::DARKBROWN:
        return "DARKBROWN";
    case Color::GREY:
        return "GREY";
    case Color::BLACKSTRIPES:
        return "BLACKSTRIPES";
    case Color::WHITESTRIPES:
        return "WHITESTRIPES";
    }
    return "";
}

string toString(Size s)
{
    switch (s)
    {
    case Size::SMALL:
        return "SMALL";
    case Size::MEDIUM:
        return "MEDIUM";
    case Size::LARGE:
        return "LARGE";
    }
    return "";
}

class Animal
{
protected:
    Color color;
    Size size;

public:
    Animal(Color color, Size size) : color(color), size(size) {}

    virtual string sound() = 0;

    virtual string eat() = 0;
};

class Mammalia : public Animal
{
protected:
    int numberOfBabies;

public:
    Mammalia(Color color, Size size, int numberOfBabies) : Animal(color, size), numberOfBabies(numberOfBabies) {}

    virtual string run() = 0;
};

class Dog : public Mammalia
{
protected:
    bool fierce;

public:
    Dog(Color color, Size size, int numberOfBabies, bool fierce) : Mammalia(color, size, numberOfBabies), fierce(fierce) {}

    virtual string bark() = 0;

    virtual string bite() = 0;
};

class ThaiRidgeBack : public Dog
{
protected:
    string origin;

public:
    ThaiRidgeBack(Color color, Size size, int numberOfBabies, bool fierce, string origin) : Dog(color, size, numberOfBabies, fierce), origin(origin) {}

    string sound() override
    {
        return "Woof!!!";
    }

    string eat() override
    {
        return "Pet food";
    }

    string run() override
    {
        return "Run on the ground";
    }

    string bark() override
    {
        return "Bark loudly";
    }

    string bite() override
    {
        return "Vicious Bite";
    }

    void info()
    {
        cout << "ThaiRidgeBack: [ Color " << toString(color) << ", Size: " << toString(size) 
        << ", Sound: " << sound() << ", Eat: " << eat() << ", Run: " << run() << ", Bark: " << bark() 
        << ", Bite: " << bite() << ", NumOfBabies: " << numberOfBabies << ", Origin: " << origin << " ]" << endl;  
    }
};

class Aves : public Animal {
    public:
        Aves(Color color, Size size): Animal(color, size){}

        virtual string fly() = 0; 
};

class Bird : public Aves {
    protected:
        string egg;

    public:
        Bird(Color color, Size size, string egg): Aves(color, size), egg(egg){}

};

class HummingBird : public Bird {
    public:
        HummingBird(Color color, Size size, string egg): Bird(color, size,egg){}

        string sound() override {
            return "Chrip Chrip";
        }

        string eat() override {
            return "Seed";
        }

        string fly() override {
            return "Fly in the sky";
        }

        void info() {
            cout << "Humming Bird: [ Color: " << toString(color) << ", Size: " << toString(size) 
            << ", Sound: " << sound() << ", Eat: " << eat() << ", FLy: " << fly() << ", Egg: " << egg << " ]" << endl;
        }
};

class Osteicthyes : public Animal {
    public:
        Osteicthyes(Color color, Size size): Animal(color, size){}

        virtual string swimming() = 0; 
};

class Fish : public Osteicthyes {
    protected:
        string waterGroup;

    public:
        Fish(Color color, Size size, string waterGroup): Osteicthyes(color, size), waterGroup(waterGroup){}

};

class AngleFish : public Fish {
    protected:
        string location;

    public:
        AngleFish(Color color, Size size, string waterGroup, string location): Fish(color, size, waterGroup), location(location){}

        string sound() override {
            return "...";
        }

        string eat() override {
            return "Plankton";
        }

        string swimming() override {
            return "Swimming in the sea";
        }

        void info() {
            cout << "Angle Fish: [ Color: " << toString(color) << ", Size: " << toString(size) 
            << ", Sound: " << sound() << ", Eat: " << eat() << ", Swimming: " << swimming() 
            << "Water Group: " << waterGroup << ", Location: " << location << " ]" << endl; 
        }
};