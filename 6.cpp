﻿#include<stdio.h>
int main()
{
	int a=0;
	char *x;
	x = (char *)&a;
	a = 512;
	x[0] = 1;
	printf("%d\n", a);
	return 0;
	//513
}
