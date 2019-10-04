//
// Created by Justin D McKenzie on 10/4/19
//

#ifndef DRIVINGSIMULATOR_BOAT_H
#define DRIVINGSIMULATOR_BOAT_H

#include "PoweredVehicle.h"

class Boat : public PoweredVehicle {

private:
    int myLength;

public:
    Boat();

    explicit Boat(string brand, string model, string fuelType,
                 int length);

    virtual ~Boat();
    virtual double mileageEstimate(double time);
    void setLength(int length);
    int getLength();
    virtual string toString();

};


#endif //DRIVINGSIMULATOR_Boat_H
