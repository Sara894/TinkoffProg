//Задача про Петю
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>  // sort
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
	sort(arr.begin(), arr.end());  // сортировка
	long long int x0 = arr[0];//по дефолту наименьший из возможных - это минимальный элемент А
	for (int i = 0; i < n; i++) {
		long long int Xi = x0 * x0 - arr[i];//ищем i-ый элемент Петиной последовательности
		for(int t = 0; t < n ; t++) {//проверяем соответствует ли Петиному условию наш x0
			if (Xi >= 0)
				Xi = Xi * Xi - arr[t];
			else
			{
				x0++;//если не соответствует то увеличиваем х0 на 1 и выходим из цикла подсчета элементов последовательности
				break;
			}
		}
	}
	cout << x0 << endl;
	return 0;
}

