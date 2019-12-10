#include <string>
using namespace std;

class Vehicle
{
private:

	string VIN;
	string mfr;
	string mfrCountry;
	string model;
	int year;
	string color;

public:

	Vehicle(string cVIN, string cmfr, string cmfrCountry,
		string cmodel, int cyear, string ccolor);

	int getYear();

	string getMfr();

	string getVin();

	string getString();

};