////////////////////////////////////////////////////////
//
// ECE 3574, A4, Walter Pereira Cruz
// File name: car.cpp
// Description: Contains the member functions implementations
// for the carCar class.
//				
// Date:        02/19/2025
//
#include "car.h"

Car::Car() {

}
Car::~Car() {

}
// FuelEfficiency is used by all classes thus doesn't need to be overrided
double Car::FuelEfficiency()
{
	return 10;
}
// SwitchMode for use in hybrid
std::string Car::SwitchMode() {
	return "SwitchMode Car";
}
/*
 Refuel for use in gasoline and hybrid but has default to make electric
 not abstract.
*/
std::string Car::Refuel()
{
	return "Refuel Car";
}
/*
 ChargeBattery for use in electric and hybrid but has default to make gasoline
 not abstract.
*/
std::string Car::ChargeBattery() {
	return "ChargeBattery Car";
}

