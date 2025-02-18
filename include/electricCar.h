#include "car.h"

class electricCar : virtual public car
{
public:
	using car::FuelEfficiency;
	// override drive since not pure virtual
	std::string Drive();
	// chargeBattery is pure virtual so no override
	std::string ChargeBattery() override;
	electricCar();
	~electricCar();

private:

};

