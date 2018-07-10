/************************************************************
* Author: Bui Duc Truong
* Namefile: Bai_3
*************************************************************/
#include <stdio.h>
#include <conio.h>

int main()
{
	float TotalKm;
	float Cost = 0;
	printf("\n Nhap vao so Km: ");
	scanf("%f", &TotalKm);
	if (TotalKm <= 1)
	{
		Cost = 10000;
	}
	else if (TotalKm <= 30 && TotalKm > 1)
	{
		Cost = (TotalKm - 1) * 7500 + 10000;
	}
	else
	{
		Cost = 10000 + 29 * 1500 + (TotalKm - 30) * 8000;
	}
	printf("\n So tien phai tra: %0.2f VND", Cost);

	getchar();
}
