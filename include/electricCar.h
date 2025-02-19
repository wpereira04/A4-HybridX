#ifndef ELECTRIC_HEADER
#define ELECTRIC_HEADER
#include "car.h"




class electricCar : virtual public car
{
public:
	//using car::FuelEfficiency;
	// override drive since not pure virtual
	virtual std::string Drive();
	// chargeBattery is pure virtual so no override
	virtual std::string ChargeBattery() override;
	electricCar();
	~electricCar();

private:

};

#endif // !ELECTRIC_HEADER
