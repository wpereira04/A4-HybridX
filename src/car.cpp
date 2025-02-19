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

car::car() {

}
car::~car() {

}
// FuelEfficiency is used by all classes thus doesn't need to be overrided
double car::FuelEfficiency()
{
	return 10;
}
// SwitchMode for use in hybrid
std::string car::SwitchMode() {
	return "SwitchMode Car";
}
/* 
 Refuel for use in gasoline and hybrid but has default to make electric
 not abstract.
*/
std::string car::Refuel()
{
	return "Refuel car";
}
/*
 ChargeBattery for use in electric and hybrid but has default to make gasoline
 not abstract.
*/
std::string car::ChargeBattery() {
	return "ChargeBattery car";
}

