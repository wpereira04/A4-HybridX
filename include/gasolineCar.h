////////////////////////////////////////////////////////
//
// ECE 3574, A4, Walter Pereira Cruz
// File name: gasolineCar.h
// Description: Contains the class and member declarations
// for the gasolineCar class. Inherits from car class
//				
// Date:        02/19/2025
//
#ifndef GASOLINE_HEADER
#define GASOLINE_HEADER
#include "car.h"

class gasolineCar: virtual public car
{
public:
	// pure virtual in car
	std::string Drive();
	// virtual in car
	std::string Refuel() override;
	gasolineCar();
	~gasolineCar();
};
#endif // !GASOLINE_HEADER

