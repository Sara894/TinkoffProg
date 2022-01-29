//Задача про Петю
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stdlib.h>     /* atoi */
using namespace std;

int main()
{
	string nn;
	getline(cin, nn);
	int n;//количество элементов во множестве А
	n = atoi(nn.c_str());//такой тупой способ ввода чтобы отделить строку с элементами массива от числа 
	string s;
	getline(cin, s);
	istringstream ss(s);
	vector<long long int> arr;
	long long int a;
	int i = 0;//счетчик для заполнения массива 
	long long int min;
	long long int max;
	while (ss >> a && i < n)
	{
		arr.push_back(a);
		if (i == 0 || max < arr[i])
				   max = arr[i];
				if (i == 0 || min > arr[i])
					min = arr[i];
		i++;
	}
	long long int x0;
	for (x0 = min; (x0 * x0) <= max; x0++){}
	cout <<" x0 "<< x0 << endl;
	return 0;
	//int n;//количество элементов во множестве А
	//cin >> n;
	//long long int *arr = new long long[n];//задаем динамический массив из 64битных чисел
	//long long int max;
	//long long int min;
	//for (int i = 0; i < n; i++) {
	//	long long int a;
	//	cin >> a;
	//	arr[i] = a;
	//	if(i == 0 || max < arr[i])
	//	   max = arr[i];
	//	if (i == 0 || min > arr[i])
	//		min = arr[i];
	//}
	//cout << " max " << max << endl;
	//long long int x0;
	//for (x0 = min; (x0 * x0) <= max; x0++){}
	//cout <<" x0 "<< x0 << endl;
	//delete [] arr;//освобождение памяти
	//
}

