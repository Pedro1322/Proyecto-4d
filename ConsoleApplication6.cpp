// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	int a1=0;
	int a2=0;
	int a3=0;
	int b1=0;
	int b2=0;
	int b3=0;
	int c1 = 0;
	int c2 = 0;
	int c3 = 0;
	int S=0;
	int VAL=0;
	int RES=0;
	int GAN=0;
	int CUBE[3][3] = { {a1, a2, a3},{b1, b2, b3},{c1, c2, c3} };
	while(S==0){
	cout << "Jugador 1";
	cin >> VAL;
	switch (VAL) {
	case 1:
		if (a1 == 0) { a1 = 1; };
		break;
	case 2:
		if (a2 == 0) { a2 = 1; };
		break;
	case 3:
		if (a3 == 0) { a3 = 1; };
		break;
	case 4:
		if (b1 == 0) { b1 = 1; };
		break;
	case 5:
		if (b2 == 0) { b2 = 1; };
		break;
	case 6:
		if (b3 == 0) { b3 = 1; };
		break;
	case 7:
		if (c1 == 0) { c1 = 1; };
		break;
	case 8:
		if (c2 == 0) { c2 = 1; };
		break;
	case 9:
		if (c3 == 0) { c3 = 1; };
		break;
	}
	cout << "Jugador 2";
	cin >> RES;
	switch (RES) {
	case 1:
		if (a1 == 0) { a1 = 5; };
		break;
	case 2:
		if (a2 == 0) { a2 = 5; };
		break;
	case 3:
		if (a3 == 0) { a3 = 5; };
		break;
	case 4:
		if (b1 == 0) { b1 = 5; };
		break;
	case 5:
		if (b2 == 0) { b2 = 5; };
		break;
	case 6:
		if (b3 == 0) { b3 = 5; };
		break;
	case 7:
		if (c1 == 0) { c1 = 5; };
		break;
	case 8:
		if (c2 == 0) { c2 = 5; };
		break;
	case 9:
		if (c3 == 0) { c3 = 5; };
		break;
	}
	if (a1 + a2 + a3 == 3 || b1 + b2 + b3 == 3 || c1 + c2 + c3 == 3 || a1 + b1 + c1 == 3 || a2 + b2 + c2 == 3 || a3 + b3 + c3 == 3 || a1 + b2 + c3 == 3 || a3 + b2 + c1 == 3) {GAN = 1; };
	if (a1 + a2 + a3 == 15 || b1 + b2 + b3 == 15 || c1 + c2 + c3 == 15 || a1 + b1 + c1 == 15 || a2 + b2 + c2 == 15 || a3 + b3 + c3 == 15 || a1 + b2 + c3 == 15 || a3 + b2 + c1 == 15) { GAN = 2; };
	if (GAN == 1) { S = 13; };
	if (GAN == 2) { S = 13; };
	}
	cout << "Usted es el ganador, jugador ";
	cout << GAN;
	return 0;
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
