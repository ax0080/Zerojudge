#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<typeinfo>
#include<iomanip>
#include<sstream>


using namespace std;



int main(void) {
	
	int year;

	while (scanf("%d", &year) != EOF)
	{
		if (year % 400 == 0) printf("閏年\n");
		else if (year % 100 == 0) printf("平年\n");
		else if (year % 4 == 0) printf("閏年\n");
		else printf("平年\n");
	}

	return 0;
}