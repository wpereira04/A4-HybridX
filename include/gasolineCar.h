#ifndef GASOLINE_HEADER
#define GASOLINE_HEADER
#include "car.h"




class gasolineCar: virtual public car
{
public:
	// not pure
	virtual std::string Drive();
	// pure virtual
	virtual std::string Refuel() override;
	gasolineCar();
	~gasolineCar();

private:

};
#endif // !GASOLINE_HEADER

