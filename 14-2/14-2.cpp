// ConsoleApplication2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "14-2.h"

int main()
{
	struct date days;
	printf("Input the day:");
	scanf_s("%d", &days.day);
	getchar();
	printf("Input the month:");
	char month[10];
	fgets(month, 10, stdin);
	printf("Input the year:");
	scanf_s("%d", &days.year);
	getchar();
	char chmon[4];
	if (!(days.mon = atoi(month)))
	{
		for (int n = 0; n < 4; n++)
			chmon[n]=toupper(month[n]);
		chmon[3] = '\0';
		days.mon = anamonth(chmon);
	}
	if (days.mon == 13)
	{
		fprintf(stderr, "You entered the wrong month.");
		getchar();
		exit(1);
	}
	calc(days);
	getchar();
	return 0;
}

