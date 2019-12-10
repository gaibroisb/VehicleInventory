#include "Inventory.h"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int main()
{
	Inventory inv;

	string cVIN, cmfr, cmfrCountry, cmodel, syear, ccolor;
	int cyear;
	int err = 0;

	string line;
	ifstream fs;
	fs.open("Input.txt");

	getline(fs, line);

	while (!(fs.peek() == '['))
	{
		getline(fs,line);
		stringstream ls(line);

		getline(ls, cVIN, ',');
		getline(ls, cmfr, ',');
		getline(ls, cmfrCountry, ',');
		getline(ls, cmodel, ',');
		getline(ls, syear, ',');
		getline(ls, ccolor, ',');

		Vehicle scanned(cVIN, cmfr, cmfrCountry, cmodel, stoi(syear), ccolor);
		inv.addVehicle(scanned);
	}

	cout << "Full inventory:\n";
	inv.printInventory();

	getline(fs, line);

	while (!(fs.peek() == '['))
	{
		getline(fs, line);
		inv.removeVehicle(line);
	}

	cout << "\nReduced inventory:\n";
	inv.printInventory();

	getline(fs, line);
	getline(fs, line);

	cout << "\nInventory for single year:\n";
	inv.printYear(stoi(line));

	getline(fs, line);
	getline(fs, line);

	cout << "\nInventory for single manufacturer:\n";
	inv.printManufacturer(line);

	return 1;
}