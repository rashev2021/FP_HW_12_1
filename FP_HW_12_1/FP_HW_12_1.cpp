#include <Windows.h>
#include <iostream>

using namespace std;

void God(int arr1[]) {
	int a = 0, a1 = 0;
	int b = 0, b1 =0;

	a = arr1[0];
	a1 = arr1[1];
	b = arr1[3];
	b1 = arr1[4];

	if (a == 29 && a1 == 2) {
		cout << endl << " Год високосный";
	}
	if (b == 29 && b1 == 2) {
		cout << endl << " Год високосный";
	}
	else {
		cout << endl << " Год не високосный";
	}
	cout << endl;

}
void Arr(int arr[]) {
	int dey1 = 0;
	int dey2 = 0;
	int rasnost = 0;

	cout << endl;
	for (int i = 0; i < 6; i++) {
		cout << " " << arr[i] << "." << " ";
	}
	cout << endl;
	dey1 = arr[0];
	dey2 = arr[3];

	if (dey1 < dey2) {
		rasnost = dey2 - dey1;
	}
	else {
		rasnost = dey1 - dey2;
	}

	cout << endl << " Разность в днях состовляет: " << rasnost  << " дней" << endl;
	God(arr);

	
}
void Array(int arr[]) {

	int a = 0, b = 0, c = 0;
	int count = 0;

	cout << endl;
	for (int i = 0; i < 6; i++) {
		cout << " " << "[" << arr[i] << "]" << " ";

		if (arr[i] > 0) {
			a++;
		}
		if (arr[i] < 0) {
			b++;
		}
		if (arr[i] == 0) {
			c++;
		}
	}
	cout << endl << endl << " Число положительных эллементов равно: " << a << endl;
	cout << endl << " Число отрицательных эллементов равно: " << b << endl;
	cout << endl << " Число эллементов равоных нулю: " << c << endl;

}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Задание 1
	/*
	const int size = 6;
	int arr[size] = {17,3,87,9,2,88};
	Arr(arr);*/

	//Заданиие 2
	/*
	const int size = 6;
	int sum = 0;
	int arr[size] = { 7,5,8,1,4,9 };
	cout << endl;
	for (int i = 0; i < 6; i++) {
		cout << " " << "[" << arr[i] << "]" << " ";
		sum += arr[i];
	}
	cout << endl<< endl << " среднее арифметическое массива равно: " << sum / size << " " << endl;*/

	//Задание 3
	/*
	
	const int size = 6;
	int arr[size] = { -1,0,-8,2,-6,0 };
	Array(arr);*/

}

