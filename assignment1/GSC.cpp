// assignment1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "rt.h"

struct PumpDataPool {
	string customerName;
	long creditCardNumber;
	int fuelTypeRequested;
	bool inUse;
};

struct FuelTankData {
	int fuelTank1Cap = 500;
	int fuelTank2Cap = 500;
	int fuelTank3Cap = 500;
	int fuelTank4Cap = 500;
};


int main(void)
{
	int FT1Cap, FT2Cap, FT3Cap, FT4Cap;
	CDataPool ft1("fueltank", sizeof(FuelTankData));

	struct FuelTankData  *fuelTank = (struct FuelTankData *)(ft1.LinkDataPool());


    return 0;
}
