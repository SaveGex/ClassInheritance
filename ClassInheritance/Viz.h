#pragma once
#include "TransportVehicle.h"
class Viz : public TransportVehicle{
private:
	float cost_plowing_land;
public:
	Viz(float cost_plowing_land, float speed, float cost_passengers, float baggage_cost);
	Viz();
	Viz(Viz&& obj);

	float get_cost_plowing(float area);
};

