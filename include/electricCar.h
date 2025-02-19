////////////////////////////////////////////////////////
//
// ECE 3574, A4, Walter Pereira Cruz
// File name: electricCar.h
// Description: Contains the class and member declarations
// for the electricCar class. Inherits from car class
//				
// Date:        02/19/2025
//
#ifndef ELECTRIC_HEADER
#define ELECTRIC_HEADER
#include "car.h"



// inherit virtual car class to resolve diamond problem
class ElectricCar : virtual public Car
{
public:
	// pure virutal from car class no overrided needed
	std::string Drive();
	// chargeBattery is virtual so override
	std::string ChargeBattery();
	double FuelEfficiency();
	// unused
	std::string Refuel();
	std::string SwitchMode();
	ElectricCar();
	~ElectricCar();
};

#endif // !ELECTRIC_HEADER
