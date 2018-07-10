/************************************************************
* Author: Bui Duc Truong
* Namefile: Bai_2
*************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main()
{
	int i, chuthuong = 0, chuhoa = 0;
	char xau[1000];
	printf("Nhap vao mot xau bat ky tu ban phim: ");
	gets(xau);
	for (i = 0; i<strlen(xau); i++)
	{
		if (xau[i] >= 97 && xau[i] <= 122)
			chuthuong += 1;
		else if (xau[i]>64 && xau[i]<91)
			chuhoa += 1;
	}

	printf("So ki tu hoa: %d", chuhoa);
	printf("\nSo ki tu thuong: %d", chuthuong);
	getchar();
	
}
