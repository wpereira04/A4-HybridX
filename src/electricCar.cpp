////////////////////////////////////////////////////////
//
// ECE 3574, A4, Walter Pereira Cruz
// File name: electricCar.cpp
// Description: Contains the member functions implementations
// for the electricCar class.
//				
// Date:        02/19/2025
//
#include "electricCar.h"

ElectricCar::ElectricCar() {

}
ElectricCar::~ElectricCar() {

}
// Redefines Drive function for electricCar
std::string ElectricCar::Drive()
{
	return "Drive ElectricCar";
}
// Redefines ChargeBattery function for electricCar
std::string ElectricCar::ChargeBattery()
{
	return "ChargeBattery ElectricCar";
}
double ElectricCar::FuelEfficiency() {
	return 10;
}

std::string ElectricCar::Refuel()
{
	return "Unused";
}

std::string ElectricCar::SwitchMode()
{
	return "Unused";
}
