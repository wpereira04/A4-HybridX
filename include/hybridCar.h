////////////////////////////////////////////////////////
//
// ECE 3574, A4, Walter Pereira Cruz
// File name: hybridCar.h
// Description: Contains the class and member declarations
// for the hybridCar class. Inherits from gasolineCar and 
// electricCar classes which inherit from car class.
//				
// Date:        02/19/2025
//
#ifndef HYBRID_HEADER
#define HYBRID_HEADER
#include "gasolineCar.h"
#include "electricCar.h"
#include <string>


class HybridCar: public GasolineCar, public ElectricCar 
{
public:
	HybridCar();
	~HybridCar();
	// pure virtual
	std::string Drive();
	// virtual needs override
	std::string Refuel() override;
	// virtual needs override
	std::string ChargeBattery() override;
	// virtual needs override
	std::string SwitchMode() override;
};
#endif // !HYBRID_HEADER
