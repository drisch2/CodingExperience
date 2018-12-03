//Dallas Risch
// 12-3-2018
// Coding Exercise Setup

#include <iostream>
#include <string>
#include "CodingExercise.h"

using std::cout; using std::cin; using std::endl;
using std::string;

size_t size = 0;
int *numArray = new int[size];

int multiply(string mult) {
	int product = 1;
	int strLength = mult.length();
	if (mult.empty())
		return 0;
	else {
		for (int i = 0; i < strLength; i++)
			searchForNum(i, mult, 0);
		for (size_t i = 0; i < size; i++) {
			product *= numArray[i];
		}
		return product;
	}
}
int charToNum(char c) {
	int num;
	switch (c) {
	case '0':
		num = 0;
		break;
	case '1':
		num = 1;
		break;
	case '2':
		num = 2;
		break;
	case '3':
		num = 3;
		break;
	case '4':
		num = 4;
		break;
	case '5':
		num = 5;
		break;
	case '6':
		num = 6;
		break;
	case '7':
		num = 7;
		break;
	case '8':
		num = 8;
		break;
	case '9':
		num = 9;
		break;
	}
	return num;
}

int numtoChar(int num) {
	int c;
	switch (num) {
	case 0:
		c = '0';
		break;
	case 1:
		c = '1';
		break;
	case 2:
		c = '2';
		break;
	case 3:
		c = '3';
		break;
	case 4:
		c = '4';
		break;
	case 5:
		c = '5';
		break;
	case 6:
		c = '6';
		break;
	case 7:
		c = '7';
		break;
	case 8:
		c = '8';
		break;
	case 9:
		c = '9';
		break;
	}
	return c;
}

void searchForNum(int num, string str, int start) {
	char numC, charSer;
	int index = 0, newNum;
	for (int i = 0; i < 10; i++) {
		charSer = numtoChar(i);
		index = str.find(start, charSer);
		//numC = str[index]; 
		//newNum = charToNum(numC);   there is an error somewhere in this part
		//addToArray(newNum);
		if (index != string::npos) {
			numC = str[index];
			newNum = charToNum(numC);
			addToArray(newNum);
			searchForNum(charSer, str, start + 1);
		}
	}
}

void addToArray(int num) {
	int *tmp = new int[size];
	for (size_t i = 0; i < size; i++)
		tmp[i] = numArray[i];
	delete[] numArray;
	size += 1;
	numArray = new int[size];
	for (size_t i = 0; i < size - 1; i++)
		numArray[i] = tmp[i];
	numArray[size - 1] = num;
}