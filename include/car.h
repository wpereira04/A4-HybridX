#ifndef CAR_HEADER
#define CAR_HEADER
#include <string>

class car
{
public:
	car();
	~car();
	// all can
	virtual std::string Drive() = 0;
	// all can
	double FuelEfficiency();
	// Electric and Hybrid
	virtual std::string ChargeBattery();
	// Gasoline and Hybrid
	virtual std::string Refuel();
	// Hybrid
	virtual std::string SwitchMode();

private:

};

#endif // !CAR_HEADER