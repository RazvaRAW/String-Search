#include <string>
#include <iostream>

using namespace std;

#define MAX_SECVENTA 1000

struct DATE_CAUTARE
{
	string sir_cautat;
	string* secventa_sir;
	int nr_elemente;
	int nr_aparitii;

	DATE_CAUTARE();
	DATE_CAUTARE(int);

	~DATE_CAUTARE();

	void citire();
	bool cautare();
};




