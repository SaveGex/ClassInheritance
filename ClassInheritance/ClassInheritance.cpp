#include <iostream>
#include <string>
#include <iomanip>
#include "TransportVehicle.h"
#include "Bike.h"
#include "Car.h"
#include "Viz.h"
using namespace std;

int main(){
	TransportVehicle tr(70, 3, 5);
	cout << "Cost transportation on 1 kilometer \npassengers / baggage:\n";
	cout << fixed << setprecision(2) << tr.get_cost_baggage(1/*kilometers*/) << " / " << tr.get_cost_passengers(1);
	Bike bk(50, 20, 5, 3);
	cout << "\nCost transportation in Bike on 1 kilometer \npassengers / baggage:\n";
	cout << fixed << setprecision(2) << bk.get_cost_baggage(1/*kilometers*/) << " / " << bk.get_cost_passengers(1);
	Car car(50, 110, 2, 3);
	cout << "\nCost transportation in Car on 1 kilometer \npassengers / baggage:\n";
	cout << fixed << setprecision(2) << car.get_cost_baggage(1/*kilometers*/) << " / " << car.get_cost_passengers(1);
	Viz vz(3, 10, 0.5f, 1);
	cout << "\nCost transportation in Viz on 1 kilometer \npassengers / baggage:\n";
	cout << fixed << setprecision(2) << vz.get_cost_baggage(1/*kilometers*/) << " / " << vz.get_cost_passengers(1) << "\nCost of plowing the land: " << vz.get_cost_plowing(3);
}
