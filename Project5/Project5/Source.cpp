#include <iostream>
void pointer()

{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int k = 0, l = 0, sz = 5; int t; int i, c ;
	int A[] = { 5, -4, 17, 9, 1 };
	int B[] = { 7,8,9,11,16 };
	cout << "t=" << endl;
	cin  >>t ;
	for ( i=0; i < sz; i++)
	{
		if (*(A + i) < t)
		{
			k++;
		}
	}
	for ( c=0; c < sz; c++)
	{
		if (*(B + c) < t)
		{
			l++;
		}
	}
	cout << "k=" << k << endl;
	cout << "l=" << l << endl;



	if (k > l)
	{
		for (i = 0; i < sz; i++)
		{
			cout << *(A+i) << " ";
		}
	}

	if (k < l)
	{
		for (c = 0; c < sz; c++)
		{
			cout << *(B + c) << " ";
		}
	}

	cout << endl;

}

void pointer2()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int o= 0, sz = 5; int i;
	int A[] = { 1, 2,17, 4, 5 };
	int B[] = { 1,2,3,4,5 };
	for (i = 0; i < sz; i++)
	{
		if (*(A + i) == *(B + i) && *(A +i+1) == *(B + i+1))
		{
			o++;
		}

	}
	cout << "o="<< o<< endl;

}
int main()
{
	pointer();
pointer2();
}



