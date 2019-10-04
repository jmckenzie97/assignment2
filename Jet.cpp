//
// Created by Justin D. McKenzie on 10/4/2019
//

#include "Jet.h"

Jet::Jet() {
    myEngineSize = "unknown";
    setBrand("Custom");
    setModel("VTx");
}

Jet::Jet(string brand, string model, string fuelType, int numEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numEngines);
}

Jet::~Jet() = default;

string Jet::getEngineSize() {
    return myEngineSize;
}

string Jet::getNumberOfEngines() {
    return numberOfEngines;
}

double Jet::mileageEstimate(double time) {
    double mileage = rand() % 100 + 40;
    if (fuelType == "rocket" && numberOfEngines > 2) {
        mileage += mileage * (5.5 * numberOfEngines);
    }
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
           getEngineSize();
}
