#include "pch.h"
#include "makanan.h"
#include <iostream>
#include "berkuah.h"
#include <string>
#include <Windows.h>
using namespace std;
makanan makan;
void makanan::intro()
{
	system("cls");
	Sleep(60);
	cout << "Silahkan Pilih Menu Makanan\n";
	Sleep(60);
	cout << "1. Berkuah\n";
	Sleep(60);
	cout << "2. Kering\n";
	Sleep(60);
	cout << "Pilihan= ";
}

void makanan::intro1()
{
	system("cls");
	Sleep(60);
	cout << "Silahkan Pilih " << endl;
	Sleep(60);
	cout << "1. Bakso\n";
	Sleep(60);
	cout << "2. Soto\n";
	Sleep(60);
	cout << "3. Rawon\n";
	Sleep(60);
	cout << "4. Sayur Asem\n";
	Sleep(60);
	cout << "Pilihan= ";
}

void makanan::intro2()
{
	system("cls");
	Sleep(60);
	cout << "1. Tempe Goreng\n";
	Sleep(60);
	cout << "2. Tahu Goreng\n";
	Sleep(60);
	cout << "3. Ikan Goreng\n";
	Sleep(60);
	cout << "Pilihan= ";
}

void makanan::total_harga(int x)
{
	
	//makan.total_semua =makan.total_semua+ x;
	total_semua = total_semua + x;
	//cout << total_semua << endl;
	//cout << makan.total_semua << endl;
	
}



