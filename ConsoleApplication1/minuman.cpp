#include "pch.h"
#include "minuman.h"
#include <iostream>
#include <Windows.h>
using namespace std;

void minuman::total_harga(int x)
{
	//cout << x << endl;
	total_semua = total_semua + x;
	//cout << total_semua;

}

void minuman::intro()
{
	system("cls");
	Sleep(60);
	cout << "Silahkan Pilih Menu Minuman\n";
	Sleep(60);
	cout << "1. Bersoda \n";
	Sleep(60);
	cout << "2. Minuman Biasa\n";
	Sleep(60);
	cout << "Pilihan= ";
}

void minuman::intro1()
{
	system("cls");
	Sleep(60);
	cout << "1. Coca Cola\n";
	Sleep(60);
	cout << "2. Spirit\n";
	Sleep(60);
	cout << "3. Fanta\n";
	Sleep(60);
	cout << "Pilihan= ";
}

void minuman::intro2()
{
	system("cls");
	Sleep(60);
	cout << "1. Air Putih\n";
	Sleep(60);
	cout << "2. Teh Manis\n";
	Sleep(60);
	cout << "3. Teh Anget\n";
	Sleep(60);
	cout << "Pilihan= ";
}
