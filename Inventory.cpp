#include <iostream>
#include "Inventory.h"

void Inventory::addVehicle(Vehicle vehicle)
{

	inv.push_back(vehicle);

}


bool Inventory::removeVehicle(string VIN)
{
	std::list<Vehicle>::iterator it;

	for (it = inv.begin(); it != inv.end(); ++it)
	{
		if (VIN.compare(it->getVin()) == 0)
		{
			inv.erase(it);
			return true;
		}
	}

	return false;
}

void Inventory::printInventory()
{
	std::list<Vehicle>::iterator it;

	for (it = inv.begin(); it != inv.end(); ++it)
	{
		cout << it->getString() << endl;
	}
}

void Inventory::printYear(int year)
{
	std::list<Vehicle>::iterator it;

	for (it = inv.begin(); it != inv.end(); ++it)
	{
		if (it->getYear() == year) {
			cout << it->getString() << endl;
		}
	}
}

void Inventory::printManufacturer(string mfr)
{
	std::list<Vehicle>::iterator it;

	for (it = inv.begin(); it != inv.end(); ++it)
	{
		if (mfr.compare(it->getMfr()) == 0) {
			cout << it->getString() << endl;
		}
	}
}