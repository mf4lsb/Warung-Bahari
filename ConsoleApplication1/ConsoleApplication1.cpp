#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include "makanan.h"
#include "berkuah.h"
#include "kering.h"
#include "minuman.h"
#include "bersoda.h"
#include "biasa.h"
#include <fstream>
#include <Windows.h>
using namespace std;
ofstream myfile;
int total;
void file(string nama_makan, int x) {
	myfile.open("data.csv", ofstream::app);
	myfile << nama_makan <<";" <<x<< endl;
	myfile.close();
}
void pendaftaran()
{
	int pilihan;
	struct daftar
	{
		string nama;
		int nomor_meja;
	}dftr;
	Sleep(60);
	cout << "\tSelamat Datang Di Warteg Bahari" << endl;
	Sleep(60);
	cout << "1. Makan Di Tempat" << endl;
	Sleep(60);
	cout << "2. Bungkus" << endl;
	cin >> pilihan;
	if (pilihan == 1)
	{
		cout << "Masukan Nama= ";
		cin >> dftr.nama;
		cout << "Masukan Nomor Meja= ";
		cin >> dftr.nomor_meja;
		myfile.open("data.csv", ofstream::app);
		myfile <<dftr.nama <<";[Makan Ditempat];"<< dftr.nomor_meja<<endl;
		myfile << "Pesanan: " << endl;
		myfile.close();
	}
	else
	{
		cout << "Masukan Nama= ";
		cin >> dftr.nama;
		myfile.open("data.csv", ofstream::app);
		myfile << dftr.nama << ";[Bungkus]" << endl;
		myfile << "Pesanan: " << endl;
		myfile.close();
	}


}
void menu()
{
	int pilihan;
	makanan makan; berkuah ber; kering ker; minuman minum; bersoda soda; biasa bias;
	int menu;
	string jawab;
ulang:
	system("cls");
	Sleep(60);
	cout << "Selamat Datang\n";
	Sleep(60);
	cout << "Silahkan Pesan \n";
	Sleep(60);
	cout << "1. Makan\n";
	Sleep(60);
	cout << "2. Minum\n";
	cin >> pilihan;
	if (pilihan == 1)//makanan
	{
		system("cls");
		ber.intro();
		cin >> pilihan;
		if (pilihan == 1) //berkuah
		{
			system("cls");
			ber.intro1();
			cin >> menu;
			switch (menu)
			{
			case 1:
				ber.total_harga(ber.bakso());
				file("Bakso", ber.porsi);
				break;
			case 2: ber.total_harga(ber.soto());
				file("Soto", ber.porsi);
				break;
			case 3: ber.total_harga(ber.rawon());
				file("Rawon", ber.porsi);
				break;
			case 4: ber.total_harga(ber.sayurasem());
				file("Sayur Asem", ber.porsi);
				break;
			}
			makan.total_semua = ber.total_semua + ker.total_semua;
			cout << "Total Harga Makanan= " << makan.total_semua << endl;
			cout << "Ingin Pesan Lagi (y/t)?";
			cin >> jawab;
			if ("y" == jawab)
			{
				cout << makan.total_semua << endl;
				goto ulang;
			}
		}
		else //kering
		{
			ker.intro2();
			cin >> menu;
			switch (menu)
			{
			case 1: ker.total_harga(ker.tempe_goreng());
				file("Tempe Goreng", ker.porsi);
				break;
			case 2: ker.total_harga(ker.tahu_goreng());
				file("Tahu Goreng", ker.porsi);
				break;
			case 3: ker.total_harga(ker.ikan_goreng());
				file("Ikan Goreng", ker.porsi);
				break;
			}
			makan.total_semua = ber.total_semua + ker.total_semua;
			cout << "Total Harga Makanan= " << makan.total_semua << endl;
			cout << "Ingin Pesan Lagi (y/t)?";
			cin >> jawab;
			if ("y" == jawab)
			{
				system("cls");
				goto ulang;
			}
		}
	}
	else//minum
	{
		{
			soda.intro();
			cin >> pilihan;
			if (pilihan == 1) //bersoda
			{
				soda.intro1();
				cin >> menu;
				switch (menu)
				{
				case 1: soda.total_harga(soda.coca_cola());
					file("Coca Cola", soda.porsi);
					break;
				case 2: soda.total_harga(soda.sprit());
					file("Sprit", soda.porsi);
					break;
				case 3: soda.total_harga(soda.Fanta());
					file("Fanta", soda.porsi);
					break;
				}
				minum.total_semua = bias.total_semua + soda.total_semua;
				cout << "Total Harga Minuman= " << minum.total_semua << endl;
				cout << "Ingin Pesan Lagi (y/t)?";
				cin >> jawab;
				if ("y" == jawab)
				{
					goto ulang;
				}
			}
			else //biasa
			{
				bias.intro2();
				cin >> menu;
				switch (menu)
				{
				case 1: bias.total_harga(bias.air_putih());
					file("Air Putih", bias.porsi);
					break;
				case 2: bias.total_harga(bias.teh_manis());
					file("Teh Manis", bias.porsi); break;
				case 3: bias.total_harga(bias.teh_hangat());
					file("Teh Hangat", bias.porsi);
					break;
				}
				minum.total_semua = bias.total_semua + soda.total_semua;
				cout << "Total Harga Minuman= " << minum.total_semua << endl;
				cout << "Ingin Pesan Lagi (y/t)?";
				cin >> jawab;
				if ("y" == jawab)
				{
					goto ulang;
				}
			}
		}
	}
	total =makan.total_semua + minum.total_semua ;
	file("Total Harga", total);
}
int main()
{
	char pilihan;
	do
	{
		system("cls");
		pendaftaran();
		menu();
		cout << "Bill Yang Di Bayar Adalah= " << total << endl;
		system("pause");
		cout << "Refresh? (y/t) "; cin >> pilihan;
	} while (pilihan == 'y');
}

