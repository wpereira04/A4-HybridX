////////////////////////////////////////////////////////
//
// ECE 3574, A4, Walter Pereira Cruz
// File name: test.cpp
// Description: Contains the tests for the movie and movie_factory
//				functions or class.
//				
// Date:        02/19/2025
//

#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "hybridCar.h"


TEST_CASE("Testing Movie project methods") {
	HybridCar hybrid;
	ElectricCar elec;
	GasolineCar gas;
	HybridCar* hyb = new HybridCar();
	SECTION("Testing vehicle calls") {
		REQUIRE(hyb->Drive() == "Drive HybridCar");
		REQUIRE(hybrid.Drive() == "Drive HybridCar");
		REQUIRE(hybrid.Refuel() == "Refuel HybridCar");
		REQUIRE(hybrid.ChargeBattery() == "ChargeBattery HybridCar");
		REQUIRE(hybrid.SwitchMode() == "SwitchMode HybridCar");
		REQUIRE(elec.Drive() == "Drive ElectricCar");
		REQUIRE(elec.ChargeBattery() == "ChargeBattery ElectricCar");
		REQUIRE(gas.Drive() == "Drive GasolineCar");
		REQUIRE(gas.Refuel() == "Refuel GasolineCar");
		REQUIRE(hybrid.FuelEfficiency() == 10);
		REQUIRE(elec.FuelEfficiency() == 10);
		REQUIRE(gas.FuelEfficiency() == 10);
		REQUIRE(gas.Car::FuelEfficiency() == 10);

	}
	

}