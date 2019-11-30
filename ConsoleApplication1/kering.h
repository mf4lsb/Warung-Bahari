#pragma once
#include "makanan.h"
using namespace std;
class kering :
	public makanan
{
public:
	int harga, porsi;
	int tempe_goreng();
	int tahu_goreng();
	int ikan_goreng();
};

