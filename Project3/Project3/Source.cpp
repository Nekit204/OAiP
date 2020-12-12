#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;
int main()
/*
{
	const int n = 100;
	int i, size, a[n], k = 0, t;
	int rmn = 0, rmx = 99;
	cout << "size=" << endl;
	cin >> size;
	cout << "a:" << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < size; i++)
	{
		a[i] = rand() % rmx;
		cout << a[i] << "  ";
	}
	cout << endl;
	for (i = 0; i < size; i++)
	{
		if (i % 7 == 0 && i != 0)
		{
			continue;

		}		cout << a[i] << "  ";

	}
	cout << endl;
	for (i = 0; i < size; i++)
	{
		if (a[i] % 2 == 1)
		{
			a[i+1] = 4;
		}
		cout << a[i] << "  ";
	}


	system("pause");
}
*/

{
	const int N = 100;
	int i, size, A[N], k = 0, t;
	int rmn = 0, rmx = 99;
	cout << "size=" << endl;
	cin >> size;
	cout << "A:" << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < size; i++)
	{
		A[i] = rand() % rmx;
		cout << A[i] << "  ";
	}
	cout << endl;

	for (i = 0; i < size; i++)
	{
		if ((i+1) % 3 == 0)
		{
			A[i] = (A[i-1] + A[i-2]) / 2;
		}
		cout << A[i] << "  ";
	}



	system("pause");



}
