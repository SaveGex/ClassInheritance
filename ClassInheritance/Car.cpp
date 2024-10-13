#include "Car.h"

Car::Car(float remaining_fuel, short speed, short cost_passengers, short baggage_cost)
	: remaining_fuel{ remaining_fuel }, TransportVehicle::TransportVehicle(speed, cost_passengers, baggage_cost)
{
}

Car::Car() : Car::Car(0, 0, 0, 0) {}

Car::Car(Car&& obj){
	this->remaining_fuel = obj.remaining_fuel;
	this->P_Cost_minute = obj.P_Cost_minute;
	this->B_Cost_minute = obj.B_Cost_minute;
	this->SpeedKmPH = obj.SpeedKmPH;
	obj.remaining_fuel = 0;
	obj.P_Cost_minute = 0;
	obj.B_Cost_minute = 0;
	obj.SpeedKmPH = 0;
}
