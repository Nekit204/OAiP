#include <iostream>
using namespace std;
void arr1()

{
	setlocale(LC_CTYPE, "Russian");
	const int n = 3, m = 2;
	int i, j, h = 0;
	int arr[n][m] =
	{ 0, 1, 2, 3, 4, 5 };
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			h += arr[i][j];
	 cout << h <<endl;
	if (h % 2 == 0)
	{
		cout << "Число четное"<<endl;
	}
	else {
		cout << "Число нечетное"<<endl;
	}

}
void arr11()
{
	setlocale(LC_CTYPE, "Russian");
	const int n = 3, m = 2;
	int i, j, h = 0;
	int arr[n][m] =
	{ 0, 1, 2, 3, 4, 6 };
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			h += *(*(arr+i)+j);
	cout << h<<endl;
	if (h % 2 == 0)
	{
		cout << "Число четное"<< endl;
	}
	else {
		cout << "Число нечетное"<< endl;
	}

}

void arr2()
{
	setlocale(LC_CTYPE, "Russian");
	const int n = 3, m = 2;
	int i, j, k=0, b=1;
	int arr[n][m] =
	{ 110, 10, 20, 30, 40, 60 };
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			if ((arr[i][j] / 2) % 2 != 0)
			{
				k = k + arr[i][j];
				b = b * arr[i][j];
			}
		}

	cout <<"Сумма:" << k << endl;
	cout << "Произведение:" << b << endl;

}

void arr21()
{
	setlocale(LC_CTYPE, "Russian");
	const int n = 3, m = 2;
	int i, j, k = 0, b = 1;
	int arr[n][m] =
	{ 14, 10, 20, 18, 40, 60 };
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			if (((*(*(arr+i)+j)) / 2) % 2 != 0)
			{
				k = k + (*(*(arr+i)+j));
				b = b * (*(*(arr + i) + j));
			}
		}

	cout<<"Сумма:" << k << endl;
	cout<<"Произведение:" << b << endl;

}
int main() {
	arr1();
	arr11();
	arr2();
	arr21();
}
