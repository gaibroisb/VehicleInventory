#include "Vehicle.h"
#include <vector>
#include <list>

class Inventory
{
private:
	
	list<Vehicle> inv;

public:

	void addVehicle(Vehicle vehicle);

	bool removeVehicle(string VIN);

	void printInventory();

	void printYear(int year);

	void printManufacturer(string mfr);

};