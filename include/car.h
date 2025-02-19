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

class car
{
public:
	car();
	~car();
	// all can
	virtual std::string Drive() = 0;
	// all can
	double FuelEfficiency();
	// Electric and Hybrid
	virtual std::string ChargeBattery();
	// Gasoline and Hybrid
	virtual std::string Refuel();
	// Hybrid
	virtual std::string SwitchMode();
};

#endif // !CAR_HEADER