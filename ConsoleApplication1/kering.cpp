#include "pch.h"
#include "kering.h"
#include <iostream>
using namespace std;



int kering::tempe_goreng()
{
	cout << "Mau Berapa Porsi? ";
	cin >> porsi;
	harga = 1000;
	return harga * porsi;
}

int kering::tahu_goreng()
{
	cout << "Mau Berapa Porsi? ";
	cin >> porsi;
	harga = 1000;
	return harga * porsi;
}

int kering::ikan_goreng()
{
	cout << "Mau Berapa Porsi? ";
	cin >> porsi;
	harga = 5000;
	return harga * porsi;
}
