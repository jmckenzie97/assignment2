//
// Created by Justin D McKenzie on 10/4/19
//

#include "Skateboard.h"


Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
    double mileage = (rand() % .5 + .1) * time;
    if (time > 25 && time < 250){
      mileage += rand() % 1 + (time/3);
    }
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}
