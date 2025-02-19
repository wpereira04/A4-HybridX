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
	hybridCar hybrid;
	electricCar elec;
	gasolineCar gas;

	SECTION("Testing vehicle calls") {
		REQUIRE(hybrid.Drive() == "Drive hybridCar");
		REQUIRE(hybrid.Refuel() == "Refuel hybridCar");
		REQUIRE(hybrid.ChargeBattery() == "ChargeBattery hybridCar");
		REQUIRE(hybrid.SwitchMode() == "SwitchMode hybridCar");
		REQUIRE(elec.Drive() == "Drive electricCar");
		REQUIRE(elec.ChargeBattery() == "ChargeBattery electricCar");
		REQUIRE(gas.Drive() == "Drive gasolineCar");
		REQUIRE(gas.Refuel() == "Refuel gasolineCar");
		REQUIRE(hybrid.FuelEfficiency() == 10);
		REQUIRE(elec.FuelEfficiency() == 10);
		REQUIRE(gas.FuelEfficiency() == 10);

	}
	

}