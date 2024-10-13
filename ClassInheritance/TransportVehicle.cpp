#include "TransportVehicle.h"
#include <iostream>
#include <iomanip>
TransportVehicle::TransportVehicle(TransportVehicle&& obj){
	this->B_Cost_minute = obj.B_Cost_minute;
	this->P_Cost_minute = obj.P_Cost_minute;
	this->SpeedKmPH = obj.SpeedKmPH;
	obj.B_Cost_minute = 0;
	obj.P_Cost_minute = 0; 
	obj.SpeedKmPH = 0;
}

TransportVehicle::TransportVehicle(float speed, float cost_passengers, float baggage_cost)
	: SpeedKmPH{ speed }, P_Cost_minute{ cost_passengers }, B_Cost_minute{ baggage_cost } 
{
	SpeedKmPH = (SpeedKmPH <= 0) ? 1 : SpeedKmPH;
}


TransportVehicle::TransportVehicle() : TransportVehicle::TransportVehicle(0, 0, 0) {

}

double TransportVehicle::get_cost_passengers(short distance_of_journey_K){

	return this->P_Cost_minute * (distance_of_journey_K) / this->SpeedKmPH * 60;
}

double TransportVehicle::get_cost_baggage(short distance_of_journey_K){
	return  B_Cost_minute * ((distance_of_journey_K / SpeedKmPH) * 60);
}
