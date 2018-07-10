/************************************************************
* Author: Bui Duc Truong
* Namefile: Bai_6
*************************************************************/
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char Xau[200];
int main()
{
	Xau x;
	int i;
	system("cls");
	printf("Nhap 1 xau: ");
	gets(x);
	//bo dau cach thua dau xau;
	i = 0;
	while (x[i] == ' ' && i<strlen(x))
		i++;
	strcpy(&x[0], &x[i]);
	//bo dau cach thua o giua xau
	i = 0;
	while (i<strlen(x) - 1) {
		if (x[i] == ' ' && x[i + 1] == ' ')
			strcpy(&x[i], &x[i + 1]);
		else
			i++;
	}
	//bo dau cach thua o cuoi xau
	while (x[strlen(x)] == ' ')
		x[strlen(x)] = '\0';
	printf("Xau sau khi chuan hoa: \n");
	printf("\n \"%s\"", x);
	getchar();
}
