#include "Vector3D.h"
#include <iostream>
#include<locale.h>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int k;
	Vector3D V1, V2,V3;
	cout << "V1(x,<enter>,y,<enter>,z,<enter>)=" << endl;
	cin >> V1;
	cout << "V1=" << endl<< V1 << endl;
	cout << "V2(x,<enter>,y,<enter>,z,<enter>)=" << endl;
	cin >> V2;
	cout << "V2=" << endl << V2 << endl;
	V3 = V2;
	cout << "Сумма векторов (V1+V3)" << endl;
	cout << V1 + V3 << endl;
	cout << "Разность векторов (V1-V2)" << endl;
	cout << V1 - V2 << endl;
	cout << "Произведение векторов(V1*V3)" << endl;
	cout << V1.sclprvect( V3) << endl;
	cout << "Введите целое число" << endl;
	cin >> k;
	cout << "Умножение вектора на число(V1*k)" << endl;
	cout << V1.umnnachislo(k) << endl;
	cout << " Сравнение векторов (V1 and V3)" << endl;
	cout << V1.sravnenie(V3) << endl;
	return 0;
		
}
