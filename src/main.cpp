////////////////////////////////////////////////////////
//
// ECE 3574, A4, Walter Pereira Cruz
// File name: main.cpp
// Description: Contains nothing used to ensure proper
// building.
//				
// Date:        02/19/2025
//
#include "hybridCar.h"
#include <iostream>
int main() {
	ElectricCar elec;
	GasolineCar gas;
	std::cout << gas.FuelEfficiency();
	return 0;
}