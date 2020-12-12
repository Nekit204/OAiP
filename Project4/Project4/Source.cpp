#include <iostream> 
using namespace std;

void bit()

{
	
	int A, i = 1;
	char tmp[33];
	cout << "A10=" << endl;
	cin >> A;
	_itoa_s(A, tmp, 2); cout << "A=" << tmp << endl;
	for (i = 0; i <= 32; i++)
	{
		cout << tmp[i] << " ";
    }
	cout << endl << "Anew" << endl;
	for (int i = 1; i <= 14; i++)
	{
		if (tmp[i] == '1')
		{
			tmp[i] = '0';
		}
		else
		{
			if (tmp[i] == '0')
			{

				tmp[i] = '1';
			}
		}
		
	}
	for (int i= 0; i <= 32; i++)
	{
		cout << tmp[i] << " ";
		
	}
	cout << endl;
}



void bit1()
{
	int A, B, p, q, n, m;
	char tmp1[33], tmp2[33];
	cout << "A=" << endl;
	cout << "B=" << endl;
	cin >> A;
	cin >> B;
	_itoa_s(A, tmp1, 2); cout << "A=" << tmp1 << endl;
	_itoa_s(B, tmp2, 2); cout << "B=" << tmp2 << endl;
	cout << "p=" << endl;
	cout << "n=" << endl;
	cout << "q=" << endl;
	cout << "m=" << endl;
	cin >> p >>n >> q >> m;
	for (int i = (p - n); i <p; i++)
	{
		if (tmp1[i] == '1')
		{
			for (int k = (q - m); k < m; k++)
			{
				tmp2[k] = '1';

			}
			tmp1[i] = '0';
		}
		else
		{
			if (tmp1[i] == '0')
			{
				for (int k = (q - m); k < m; k++)
				{
					tmp2[k] = '0';

				}
				tmp1[i] = '1';
			}
		}
	}
	cout << "A=" << tmp1 << endl;
	cout << "B=" << tmp2 << endl;
	
	
}


void bit2()
{
	setlocale(LC_ALL, "RUSSIAN");
	char tmp[33];
	int A;
	cout << "A=" << endl;
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "двоичная система=" << tmp << endl;
	if (A % 4 == 0)
	{
		cout << "кратно 4" << endl;
	}
	else
	{
		cout << "не кратно 4" << endl;
	}



}

void bit3()
{
	setlocale(LC_ALL, "RUSSIAN");
	char tmp[33];
	int A, p,n;
	cout << "A=" << endl;
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "двоичная система=" <<tmp<< endl;
	cout << "p=" << endl;
	cin >> p;
	cout << "n=" << endl;
	cin >> n;
	for (int i = (p-n); i < p; i++)
	{
		tmp[i] = '1';
	}
	cout << "A2=" << tmp;
}
int main(){
	bit();
bit1();
bit2();
bit3();
}