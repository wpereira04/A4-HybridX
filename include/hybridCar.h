#ifndef HYBRID_HEADER
#define HYBRID_HEADER
#include "gasolineCar.h"
#include "electricCar.h"
#include <string>


class hybridCar: public gasolineCar, public electricCar 
{
public:
	hybridCar();
	~hybridCar();
	std::string Drive();
	std::string Refuel() override;
	std::string ChargeBattery() override;
	std::string SwitchMode() override;

private:

};
#endif // !HYBRID_HEADER
