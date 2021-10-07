#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N, i;
	double S;
	cout << "N = "; cin >> N;
	S = 0;
	i = N;
	while (i <= 20)
	{
		S += (cos(i)+sin(i))/1+cos(i)*sin(i);
		i++;
	}
	cout << S << endl;
	S = 0;
	i = N;
	do {
		S += (cos(i) + sin(i)) / 1 + cos(i) * sin(i);
		i++;
	} while (i <= N);
	cout << S << endl;
	S = 0;
	for (i = N; i <= 20; i++)
	{
		S += (cos(i) + sin(i)) / 1 + cos(i) * sin(i);
	}
	cout << S << endl;
	S = 0;
	for (i = 20; i >= N; i--)
	{
		S += sin(1. * i);
	}
	cout << S << endl;
	return 0;
}