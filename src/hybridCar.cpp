////////////////////////////////////////////////////////
//
// ECE 3574, A4, Walter Pereira Cruz
// File name: hybridCar.cpp
// Description: Contains the member functions implementations
// for the hybridCar class.
//				
// Date:        02/19/2025
//
#include "hybridCar.h"

// constructor
HybridCar::HybridCar() {
	
}
// destructor
HybridCar::~HybridCar() {

}
// SwitchMode only for hybrid
std::string HybridCar::SwitchMode() {
	return "SwitchMode HybridCar";
}
// Drive part of all classes
std::string HybridCar::Drive() {
	return "Drive HybridCar";
}
// Refuel part of hybrid and gasoline
std::string HybridCar::Refuel() {
	return "Refuel HybridCar";
}
// ChargeBattery part of hybrid and electric
std::string HybridCar::ChargeBattery() {
	return "ChargeBattery HybridCar";
}
double HybridCar::FuelEfficiency() {
	return 10;
}


