#pragma once
#include "TransportVehicle.h"
class Bike : public TransportVehicle{
private:
	float Max_day_distance;
public:
	Bike(float max_dist, short speed, short cost_passengers, short baggage_cost);
	Bike();
	Bike(Bike&& obj);

};

