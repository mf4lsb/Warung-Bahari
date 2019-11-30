#include "pch.h"
#include "biasa.h"
#include <iostream>
using namespace std;
int biasa::air_putih()
{
	cout << "Mau Berapa Gelas ";
	cin >> porsi;
	harga = 1000;
	return harga * porsi;
}

int biasa::teh_manis()
{
	cout << "Mau Berapa Gelas ";
	cin >> porsi;
	harga = 1000;
	return harga * porsi;
}

int biasa::teh_hangat()
{
	cout << "Mau Berapa Gelas ";
	cin >> porsi;
	harga = 1000;
	return harga * porsi;
}
