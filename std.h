#pragma once
#include <iostream>
#ifndef STD_H
#define STD_H

void summaryOfInputNums() {
	int n;
	int result = 0;

	while (true) {
		std::cin >> n;
		if (n == 0) break;
		result += n;
	}

	std::cout << "Сумма введённых чисел равна " << result;
}

#endif