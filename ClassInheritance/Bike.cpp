#include "Bike.h"

Bike::Bike(float max_dist, short speed, short cost_passengers, short baggage_cost) 
	: Max_day_distance{ max_dist }, TransportVehicle::TransportVehicle(speed, cost_passengers, baggage_cost) 
{}

Bike::Bike(): Bike(0, 0, 0, 0){}

Bike::Bike(Bike&& obj){
	this->Max_day_distance = obj.Max_day_distance;
	this->P_Cost_minute = obj.P_Cost_minute;
	this->B_Cost_minute = obj.B_Cost_minute;
	this->SpeedKmPH = obj.SpeedKmPH;
	obj.Max_day_distance = 0;
	obj.P_Cost_minute = 0;
	obj.B_Cost_minute = 0;
	obj.SpeedKmPH = 0;
}
