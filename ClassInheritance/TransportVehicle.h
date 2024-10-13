#pragma once
class TransportVehicle{
protected:
	float SpeedKmPH;
	float P_Cost_minute;
	float B_Cost_minute;
public:
	TransportVehicle(TransportVehicle&& obj);
	TransportVehicle(float speed, float cost_passengers, float baggage_cost);
	TransportVehicle();

	double get_cost_passengers(short distance_of_journey_K);
	double get_cost_baggage(short distance_of_journey_K);

};