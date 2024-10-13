#include "Viz.h"

Viz::Viz(float cost_plowing_land, float speed, float cost_passengers, float baggage_cost)
	: cost_plowing_land{cost_plowing_land}, TransportVehicle::TransportVehicle(speed, cost_passengers, baggage_cost)
{
}

Viz::Viz(): Viz::Viz(0,0,0,0)
{
}

Viz::Viz(Viz&& obj){

	this->cost_plowing_land = obj.cost_plowing_land;
	this->P_Cost_minute = obj.P_Cost_minute;
	this->B_Cost_minute = obj.B_Cost_minute;
	this->SpeedKmPH = obj.SpeedKmPH;
	obj.cost_plowing_land = 0;
	obj.P_Cost_minute = 0;
	obj.B_Cost_minute = 0;
	obj.SpeedKmPH = 0;
}

float Viz::get_cost_plowing(float area){
	return B_Cost_minute * ((area / SpeedKmPH) * 60);
}
