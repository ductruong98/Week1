/************************************************************
* Author: Bui Duc Truong
* Namefile: Bai_5
*************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ngay, thang, nam;
	printf("Moi nhap vao ngay:\n");
	scanf("%d", &ngay);
	printf("Moi nhap vao thang\n");
	scanf("%d", &thang);
	printf("Moi nhap vao nam\n");
	scanf("%d", &nam);
	if ((nam % 4 == 0) && (nam % 100 != 0))
	{
		if ((thang == 2) && (ngay>29))
		{
			printf("Khong hop le");
		}
		else
			printf("Nam nhuan");
	}
	else if (ngay>31 || thang>12 || ((thang == 2) && (ngay>28)))

	{
		printf("Khong hop le");

	}
	getchar();
}
