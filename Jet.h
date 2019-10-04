//
// Created by Justin D. McKenzie on 10/4/2019
//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
    int numberOfEngines

public:
    Jet();

    explicit Jet(string brand, string model, string fuelType, int numEngines);

    virtual ~Jet();
    string getEngineSize();
    int getNumberOfEngines();
    void setEngineSize(string engineSize);
    void setNumberOfEngines(int numEngines)
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_Jet_H
