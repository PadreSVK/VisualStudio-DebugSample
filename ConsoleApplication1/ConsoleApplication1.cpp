// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "superfile.h"

int myMethod(int arg1, double arg2);
int myMethod2(int test);

struct product {
	double weight;
	double price;
};

int main()
{
	int returnValue = myMethod(myMethod2(4), 55.6);
	std::cout << "Hello World!\n";
}

int myMethod2(int test) {
	int a = 5;
	double z = 44.555;
	return test + 8;
}


int myMethod(int arg1, double arg2) {
	int localVariable = 44;
	int result = 0;

	product banana;
	banana.price = 100;
	banana.weight = 0.5;

	for (int i = 0; i < arg1; i++)
	{
		result += 5;
		if (result % 10 == 0) {
			localVariable = localVariable - 4;
		}
	}

	int resultFromAnotherFile = myMethodInAnotherFile(55, 66.4);

	return result;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
