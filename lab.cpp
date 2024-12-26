#include <iostream>
#include <Windows.h>
#include "std.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	summaryOfInputNums();
	return 0;
}