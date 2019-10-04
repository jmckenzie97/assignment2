//
// Created by Justin D McKenzie on 10/4/19
//

#include "Boat.h"

Boat::Boat() {
    myEngineSize = "unknown";
    setBrand("Custom");
    setModel("VTx");
}

Boat::Boat(string brand, string model, string fuelType, int length);{
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setLength(length);
}

Boat::~Boat() = default;

string Boat::getLength() {
    return myLength;
}

void Boat::setLength(string length) {
    myLength = length
}

double Boat::mileageEstimate(double time) {
    double mileage = .5 * time;
    if (myLength > 25){
      mileage += length * .3
    }
    return mileage;
}

string Boat::toString() {
    return "-> Boat\n" + PoweredVehicle::toString() + "\n\tLength: " +
           getLength();
}
