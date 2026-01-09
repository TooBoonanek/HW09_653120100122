#include <iostream>
#include "Shape.cpp"
#include "Animal.cpp"

using namespace std;

int main() {

    Circle cir("Circle", 2.0);
    cir.info();

    Cylinder cy("Cylinder", 3.0, 4.0);
    cy.info();

    Rectangle rec("Rentangle", 3.0, 5.0);
    rec.info();

    Polygon po("Polygon", 6.0, 4.0, 6);
    po.info();

    cout << "=======================================================" << endl;
    ThaiRidgeBack dog(Color::BROWN, Size::MEDIUM, 6, false, "Thailand");
    dog.info();

    HummingBird bird(Color::WHITE, Size::SMALL, "humming bird egg");
    bird.info();

    AngleFish fish(Color::WHITESTRIPES, Size::SMALL, "Salt Sea", "Andaman");
    fish.info();

    return 0;
}