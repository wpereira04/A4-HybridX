////////////////////////////////////////////////////////
//
// ECE 3574, A4, Walter Pereira Cruz
// File name: gasolineCar.cpp
// Description: Contains the member functions implementations
// for the gasolineCar class.
//				
// Date:        02/19/2025
//
#include "gasolineCar.h"

GasolineCar::GasolineCar()
{
}

GasolineCar::~GasolineCar()
{
}
// Redefines Drive function for gasolineCar
std::string GasolineCar::Drive() {
	return "Drive GasolineCar";
}
// Redefines Refuel function for gasolineCar
std::string GasolineCar::Refuel() {
	return "Refuel GasolineCar";
}
double GasolineCar::FuelEfficiency() {
	return 10;
}

std::string GasolineCar::ChargeBattery()
{
	return "Unused";
}

std::string GasolineCar::SwitchMode()
{
	return "Unused";
}
