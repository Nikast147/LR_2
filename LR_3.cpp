
#include <iostream>
#include "stdio.h"
#include "windows.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a=1, b=2, c=3, h=4, S, P;
	S = (a + b) * 0.5 * h;
	P = a * b * 2 * c;
	cout << "S =" << S << endl;
	cout << "P =" << P << endl;
	cout << "Можливість писати кирилицею" << endl;
	cout << "Зміна для 12 лабораторної роботи";
	system("pause");
	return 0;
	//додано новий коментар
} 



