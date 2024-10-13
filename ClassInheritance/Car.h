#pragma once
#include "TransportVehicle.h"

class Car : public TransportVehicle{
private:
	float remaining_fuel;
public:
	Car(float remaining_fuel, short speed, short cost_passengers, short baggage_cost);
	Car();
	Car(Car&& obj);
};

