/************************************************************
* Author: Bui Duc Truong
* Namefile: Bai_1
*************************************************************/
#include <stdio.h>
#include <conio.h>
int n;
int main()
{
	int  a, b, c, temp;


	while (n<100 || n>999)
	{
		printf("Nhap so nguyen n(gom 3 chu so): ");
		scanf("%d", &n);
		if (n<100 || n>999)
		{
			printf("So ban vua nhap khong dung, nhan enter de nhap lai...\n");
		}
	}

	a = n / 100;
	b = ((n % 100) / 10);
	c = n % 10;
	if (a<b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (b<c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	if (a<b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	printf("OUTPUT: %d%d%d", a, b, c);
	getchar();
	getchar();
}
