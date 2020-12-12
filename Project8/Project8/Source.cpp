//#include<iostream>
//#include<stdio.h>
//using namespace std;
//void str1()
//{
//char s[256], s2[256];
//int i; int l; int k = 0;
//puts("Enter string: ");
//gets_s(s);
//for (i = 0; s[i] != 0; i++)
//{
//	if (s[i] == '*')
//	{
//		i++;
//		while (s[i] != '*' && s[i] != 0)
//		{
//			s2[k] = s[i];
//			i++;
//			k++;
//		}
//	}
//
//}
//for (l = 0; l < k; l++)
//{
//	cout << s2[l] << " ";
//}
//cout << endl;
//}
//
//void str2()
//{
//char s[256], s2[256];
//int i; int l; int k = 0;
//puts("Enter string: ");
//gets_s(s);
//for (i = 0; *(s+i) != 0; i++)
//{
//	if (*(s+i) == '*')
//	{
//		i++;
//		while (*(s+i) != '*' && *(s+i) != 0)
//		{
//			*(s+k) = *(s+i);
//			i++;
//			k++;
//		}
//	}
//
//}
//for (l = 0; l < k; l++)
//{
//	cout << *(s+l) <<" ";
//}
//cout << endl;
//}
//
//void str3()
//{
//	char str[256], str2[256],str3[256];
//	int len;
//	puts("String: ");
//	gets_s(str);
//	len = strlen(str);
//	for (int i = 0, j = 0; i < strlen(str); i++) 
//	{
//
//		if (str[i] == '*') 
//		{
//			len--;
//			continue;
//		}
//		str2[j] = str[i]; str2[j + 1] = str[i];
//		j++;
//	}
//	str2[len] = '\0';
//	for (int i = 0, j = 0; i < strlen(str2); i++) {
//		str3[j] = str2[i];
//		str3[j + 1] = str2[i];
//		j += 2;
//	}
//	str3[2 * strlen(str2)] = '\0';
//	cout << str3 << endl;
//
//
//	
//}
//void str4()
//{
//char str[256], str2[256], str3[256];
//int len; int i, j;
//puts("String: ");
//gets_s(str);
//len = strlen(str);
//for ( i = 0, j = 0; i < strlen(str); i++)
//{
//
//	if (*(str+i) == '*')
//	{
//		len--;
//		continue;
//	}
//	*(str2 + j) = *(str + i);
//	j++;
//}
//str2[len] = '\0';
//for (int i = 0, j = 0; i < strlen(str2); i++) {
//	*(str3+j) = *(str2+i);
//	*(str3+j+1) = *(str2+i);
//	j += 2;
//}
//str3[2 * strlen(str2)] = '\0';
//cout << str3 << endl;
//
//
//system("pause");
//}
//int main()
//{
//	str1();
//	str2();
//	str3();
//	str4();
//}
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
		cout << "¬ведите" << endl;
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
	int size = 0, i, n;
	float* M, sum = 0, avar, mn;
	cout << "¬ведите размер массива ";
	cin >> size;

	M = new float[size];
	for (i = 0; i < size; i++)
	{
		cout << "¬ведите " << i + 1 << " элемент ";
		cin >> *(M + i);
		sum += *(M + i);
	}
	avar = sum / size;
	mn = abs(*M - avar);
	n = 0;
	for (i = 0; i < size; i++)
		if (abs(*(M + i) - avar) < mn)
		{
			mn = abs(*(M + i) - avar);
			n = i;
		}
	cout << "ѕервое число, близкое к среднему арифм.=" << *(M + n);
	cout << endl;
	delete[] M;
}

void matrix()
{
	int* A, row, colum, i, j, max_colum, max_row, max;
	cout << "¬ведите число строк матрицы ";
	cin >> row;
	cout << "¬ведите чиcло столбцов ";
	cin >> colum;
	A = new int[row * colum];
	for (i = 0; i < row; i++)
		for (j = 0; j < colum; j++)
		{
			cout << "¬ведите " << i + 1 << " элемент " << j + 1 << "-й строки ";
			cin >> *(A + i * colum + j);
		}
	max = A[0];
	max_row = 0;
	max_colum = 0;
	for (i = 0; i < row; i++)
		for (j = 0; j < colum; j++)
			if (*(A + i * colum + j) > max)
			{
				max = *(A + i * colum + j);
				max_row = i + 1;
				max_colum = j + 1;
			}
	cout << "ћаксимальный элемент A[" << max_row << "," << max_colum << "]=" << max;
	cout << endl;
	delete[] A;
}

