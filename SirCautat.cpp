
#include "../inc/SirCautat.h"

DATE_CAUTARE::DATE_CAUTARE()
{
	cout << "Nr. elemente:";
	cin>>this->nr_elemente;
	this->secventa_sir = new string[this->nr_elemente];
}

DATE_CAUTARE::DATE_CAUTARE(int n)
{
	nr_elemente = n;
	secventa_sir = new string[nr_elemente];
}

DATE_CAUTARE::~DATE_CAUTARE()
{
	delete[] this->secventa_sir;
}


void DATE_CAUTARE::citire()
{
	for (int i = 0; i < this->nr_elemente; i++)
	{
		cout << "secventa_sir[" << i << "]=";
		cin >> this->secventa_sir[i];
	}
	cout << "Introthis-> sir cautat:";
	cin >> this->sir_cautat;

	this->nr_aparitii = 0;
}

bool DATE_CAUTARE::cautare()
{
	this->nr_aparitii = 0;

	for (int i = 0; i < this->nr_elemente; i++)
	{
		if (this->secventa_sir[i] == this->sir_cautat)
		{
			this->nr_aparitii += 1;
		}
	}

	if (this->nr_aparitii > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

