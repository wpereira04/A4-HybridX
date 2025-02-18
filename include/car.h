#include <string>c

class car
{
public:
	// all can
	virtual std::string Drive() = 0;
	// all can
	virtual double FuelEfficiency();
	// Electric and Hybrid
	virtual std::string ChargeBattery();
	// Gasoline and Hybrid
	virtual std::string Refuel();
	// Hybrid
	virtual std::string SwitchMode();

private:

};





