#pragma once
#include <iostream>
#ifndef STD_H
#define STD_H

using namespace std;

void summaryOfInputNums() {
	int a, b;
	cout << "Enter A and B: ";
	cin >> a >> b;
	cout << "A + B = " << a + b << endl
		 << "A - B = " << a - b << endl
		 << "A / B = " << a / b << endl;
}

#endif