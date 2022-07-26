#include <Windows.h>
#include <iostream>

using namespace std;

void God(int a, int b) {

	if (a && b == 29) {
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
		cout << " " << "[" << arr[i] << "]" << " ";
	}
	cout << endl;
	dey1 = arr[0];
	dey2 = arr[3];

	rasnost = dey1 - dey2;

	cout << endl << " Разность в днях состовляет: " << rasnost  << " дней" << endl;
	God(dey1, dey2);

	
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
	int arr[size] = {17,7,87,12,4,88};
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

