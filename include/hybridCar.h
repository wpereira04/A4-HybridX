#include "gasolineCar.h"
#include "electricCar.h"
#include <string>

class hybridCar: public gasolineCar, public electricCar 
{
public:
	using gasolineCar::car::FuelEfficiency;
	std::string Drive();
	std::string Refuel() override;
	std::string ChargeBattery() override;
	std::string SwitchMode() override;

private:

};
