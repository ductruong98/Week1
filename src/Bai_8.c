/************************************************************
* Author: Bui Duc Truong
* Namefile: Bai_8
*************************************************************/
#include <stdio.h>
#include<string.h>
#include <stdlib.h>
char *dnchuoi(char *s)
{
	char *tmp, i;
	i = 0;
	tmp = (char *)malloc(strlen(s) + 1);
	while (i<strlen(s))
		*(tmp + i) = *(s + strlen(s) - i++ - 1);
	*(tmp + i) = 0;
	return tmp;
}
int main() {
	char s1[100];    // khai bao chuoi
	printf("Nhap vao 1 xau: \n");
	gets(s1);
	printf("Xau sau khi dao nguoc la:\n");
	printf("\"%s\"", dnchuoi(s1));
	getchar();
}
