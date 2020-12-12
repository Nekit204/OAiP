#include<iostream>
#include<ctime>
//void matr(int** A, int size1, int size2, int rmax, int rmin)
//{
//	srand((unsigned)time(NULL));
//	for (int i = 1; i <= size1; i++)
//	{
//		A[i] = new int[size2];
//		for (int j = 1; j <= size2; j++)
//			A[i][j] = (int)(((double)rand() / (double)RAND_MAX) * (rmax - rmin) + rmin);
//	}
//}
//void matr2(int** A, int size1, int size2)
//{
//	for (int i = 1; i <= size1; i++)
//	{
//		for (int j = 1; j <= size2; j++)
//			std::cout << A[i][j] << " ";
//		std::cout << std::endl;
//	}
//}
//int f1(int** A, int size1, int size2, int* pstr)
//{
//	int ch;
//	for (int i = 1; i <= size1; i++)
//	{
//		ch = 0;
//		for (int j = 1; j <= size2; j++)
//			if (A[i][j] >= 0)
//				ch++;
//		if (ch == size2)
//		{
//			*pstr = i;
//			break;
//		}
//	}
//	return *pstr;
//}
//int f2(int** A, int size1, int size2, int str, int* sum)
//{ for (int i = str; i <= str; i++)
//	for (int j = 1; j <= size2; j++)
//	*sum += A[i][j];
//	return *sum;
//}
//void f3(int** A, int size1, int size2, int* sum)
//{
//	for (int i =1; i <= size1; i++)
//		for (int j = 1; j <= size2; j++)
//			A[i][j] = A[i][j] - *sum;
//}
//int main()
//{
//	using namespace std;
//	setlocale(LC_CTYPE, "Russian");
//	int size1, size2, rmin = -10, rmax = 20, str = 0, sum = 0;
//	int** A;
//	cout << " Размеры матрицы:" << endl;;
//	cin >> size1 >> size2;
//	A = new int* [size1];
//	cout << "Матрица";
//	cout << endl;
//	matr(A, size1, size2, rmax, rmin);
//	matr2(A, size1, size2);
//	cout << "\nНомер строки : " << f1(A, size1, size2, &str) << endl;
//	cout << "Сумма : " << f2(A, size1, size2,str, &sum) << endl;
//	f3(A, size1, size2, &sum);
//	cout << "Измененная матрица:"<<" \n";
//	matr2(A, size1, size2);
//}
int fmax(int n, ...)
{
	
	int* p = &n;
	int min = 200;
	for (int i = 1; i <= 5; i++, *p++)
	{
		std::cout << *p << " ";
		if (*p < min)
			min = *p;
	}
	return min;
	
}
void main()
{
	
	std::cout << "min: " << fmax(189, 44, 130, 55, 175) << "\n";
	std::cout << "min: " << fmax(125, 8, 152, 146, 29)<<"\n";
	std::cout << "min: " << fmax(16, 48, 28, 132, 20) << "\n";
}