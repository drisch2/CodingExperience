//Dallas Risch
// 12-3-2018
// Coding Exercise Test

#include <iostream>
#include "CodingExercise.h"
#include <string>

using std::cout; using std::cin; using std::endl;
using std::string;

void main() {
	string userString;
	cout << "enter a string of numbers to multiply: " << endl;
	cin >> userString;
	cout << "The product is " << multiply(userString) << endl;
}