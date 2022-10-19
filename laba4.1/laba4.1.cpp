#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N, i;
	double P;
	
	cout << "N = "; cin >> N;
	P = 15;
	i = 1;
	while (i <= N)
	{
		P *= (sin(i) * sin(i) + cos(1 / i) * cos(1 / i)) / i * i;
		i++;
	}
	cout << P << endl;
	
	P = 15;
	i = 1;
	do {
		P *= (sin(i) * sin(i) + cos(1 / i) * cos(1 / i)) / i * i;
		i++;
	} while (i <= N);
	cout << P << endl;
	P = 15;
	for (i = 1; i <= N; i++)
	{
		P *= (sin(i) * sin(i) + cos(1 / i) * cos(1 / i)) / i * i;
	}
	cout << P << endl;
	P = 15;
	for (i = N; i >= 1; i--)
	{
		P *= (sin(i) * sin(i) + cos(1 / i) * cos(1 / i)) / i * i;
	}
	cout << P << endl;
	return 0;
}