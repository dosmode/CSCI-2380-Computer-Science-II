// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
double radiousChecker(int r, int tr) {
	int checkedResult = 0;
	for (int i = 0; i < tr; i++) {
		int x = rand() % (r);
		int y = rand() % (r);
		double randDistance = sqrt((x*x) + (y*y));
		cout << randDistance;
		if (randDistance < 2*r) {
			checkedResult++;
		}
	}
	return checkedResult;
}

int calculating(int r, int tr) {
	int result;
	
	result = 4 * (static_cast<double>(radiousChecker(r,tr)) / tr);

	return result;
}
int main()
{
	int numberOfTry = 500000;
	int nuberOfTarget=0;
	int radious=100;
	double calculatedPI;


	calculatedPI = calculating(static_cast<double> (radious), numberOfTry);
	cout << calculatedPI << endl;
	return 0; 

}

