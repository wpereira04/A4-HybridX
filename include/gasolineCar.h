#include "car.h"

class gasolineCar: virtual public car
{
public:
	using car::FuelEfficiency;
	// not pure
	std::string Drive();
	// pure virtual
	std::string Refuel() override;
	gasolineCar();
	~gasolineCar();

private:

};

