#include "pch.h"
#include "berkuah.h"
#include <iostream>
using namespace std;

int berkuah::bakso()
{
	cout << "Mau Berapa Porsi? ";
	cin >> porsi;
	harga = 1000;
	return harga*porsi;
}

int berkuah::soto()
{
	cout << "Mau Berapa Porsi? ";
	cin >> porsi;
	harga = 2000;
	return harga * porsi;
}
int berkuah::rawon()
{
	cout << "Mau Berapa Porsi? ";
	cin >> porsi;
	harga = 3000;
	return harga * porsi;
}
int berkuah::sayurasem()
{
	cout << "Mau Berapa Porsi? ";
	cin >> porsi;
	harga = 4000;
	return harga * porsi;
}