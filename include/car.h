////////////////////////////////////////////////////////
//
// ECE 3574, A4, Walter Pereira Cruz
// File name: car.h
// Description: Contains the class and member declarations
// for the car class.
//				
// Date:        02/19/2025
//
#ifndef CAR_HEADER
#define CAR_HEADER
#include <string>

class Car
{
public:
	// all can
	virtual std::string Drive() = 0;
	// all can
	virtual double FuelEfficiency() = 0;
	// Electric and Hybrid
	virtual std::string ChargeBattery() =0;
	// Gasoline and Hybrid
	virtual std::string Refuel() = 0;
	// Hybrid
	virtual std::string SwitchMode() = 0;
};

#endif // !CAR_HEADER