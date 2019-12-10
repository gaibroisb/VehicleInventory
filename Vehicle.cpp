#include "Vehicle.h"
#include <sstream>


Vehicle::Vehicle(string cVIN, string cmfr, string cmfrCountry,
				 string cmodel, int cyear, string ccolor)
{
	VIN = cVIN;
	mfr = cmfr;
	mfrCountry = cmfrCountry;
	model = cmodel;
	year = cyear;
	color = ccolor;
}

int Vehicle::getYear() { return year; }

string Vehicle::getMfr() { return mfr; }

string Vehicle::getVin() { return VIN; }

string Vehicle::getString() {

	stringstream output;

	string extra;

	if (mfr.compare("BMW") == 0) { extra = " (C) BMW AG, Munich, Germany"; }
	else if (mfr.compare("Tesla") == 0) { extra = " (Batteries Included!)"; }
	else { extra = ""; }

	output << color << ' ' << year << ' ' << mfr << ' ' << model << ' ' << VIN << extra;

	return output.str();

}