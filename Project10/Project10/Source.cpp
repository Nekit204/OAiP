# include <iostream>
#include<ctime>
# include <iostream>
using namespace std;
void massiv();
void matrix();

int main(void)
{
	setlocale(LC_CTYPE, "Russian");
	int c;
	do
	{
		cout << endl;
		cout << "Введите" << endl;
		cout << "1-одномерный массив" << endl;
		cout << "2-работа с матрицей" << endl;
		cout << "3-выход" << endl;
		cin >> c;
		switch (c)
		{
		case 1: massiv(); break;
		case 2: matrix(); break;
		case 3: break;
		}
	} while (c != 3);
}

void massiv()
{
	setlocale(LC_CTYPE, "Russian");
	int rmin = -99, rmax = 99, size, sum = 0, p = 1, max = 0, min = 100, position;
	int* A;
	cout << "size=";
	cin >> size;
	A = new int[size];
	cout << "Массив:" << endl;
	for (int i = 1; i <= size; i++)
	{
		A[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmax - rmin) + rmin);
		cout << A[i] << " ";
		if (A[i] > max)
		{
			max = A[i];
			position = i;
		}
	}
	cout << endl;
	cout << "Максимальный элемент: " << max;
	for (int i = 1; i <= position - 1; i++)
	{

		if (A[i] < 0)
			p *= A[i];
		else
			sum += A[i];
	}
	cout << endl;
	cout << "p=" << p;
	cout << endl;
	cout << "sum=" << sum;

	void matrix()
		 {
		setlocale(LC_CTYPE, "Russian");
		int rmin = 1, rmax = 10, sum1 = 0, sum2 = 0, min1 = 11, max2 = 0, min3 = 11, max4 = 0;
		int** A;
		srand((unsigned)time(0));
		cout << "Матрица:" << endl;
		A = new int* [4];
		for (int i = 1; i <= 4; i++)
		{
			A[i] = new int[4];
			for (int j = 1; j <= 4; j++)
			{
				A[i][j] = (int)(((double)rand() / (double)RAND_MAX) * (rmax - rmin) + rmin);
				cout << A[i][j] << " ";

			}


			cout << endl;
		}
		for (int i = 1; i <= 1; i++)
		{

			for (int j = 1; j <= 4; j++)
			{

				if (A[i][j] < min1)
					min1 = A[i][j];


			}
			cout << "min1=" << min1 << endl;
		}
		for (int i = 2; i <= 2; i++)
		{

			for (int j = 1; j <= 4; j++)
			{

				if (A[i][j] > max2)
					max2 = A[i][j];


			}
			cout << "max2=" << max2 << endl;
		}
		for (int i = 3; i <= 3; i++)
		{

			for (int j = 1; j <= 4; j++)
			{

				if (A[i][j] < min3)
					min3 = A[i][j];


			}
			cout << "min3=" << min3 << endl;
		}
		for (int i = 4; i <= 4; i++)
		{

			for (int j = 1; j <= 4; j++)
			{

				if (A[i][j] > max4)
					max4 = A[i][j];


			}
			cout << "max4=" << max4 << endl;
		}
		{
			sum1 = min1 + min3;
			sum2 = max2 + max4;
		}
		cout << "Сумма минимальных:" << sum1 << endl;
		cout << "Сумма максимальных:" << sum2 << endl;

	}