#include <iostream>
using namespace std;
//variant 2
void pointer1() {
	int A[] = { 1,2,3,4,5 }, B[] = { 6,7,8,9,10 }, C[5] = {};

	for (int i = 0; i < size(A); i++) {
		*(C + i) = *(A + i) + *(B + i);
	}
	for (int i = 0; i < size(C); i++) {
		cout << *(C + i) << " ";
	} 

	cout << endl;
}

//variant 5
void pointer2() 
{
	setlocale(LC_CTYPE, "Russian");
	int A[] = { 4,5,8,20,123,93,57,30 }, max, B[] = { 1,16,3,20,56,123,1125,79 };
	max = *(A);
	for (int i = 0; i < size(A); i++)
	{
		if ((*(A + i)) > max)
		{
			max = (*(A + i));
		}
	}
	cout << "max=";
	cout<<max<<endl ;
	for (int i = 0; i < size(B); i++)
	{
		if ((*(B + i)) == max)
		{   
			cout << "Содержится" << " ";

		}

	}
	cout << endl;
}
//variant 7
void pointer3()
{
	setlocale(LC_CTYPE, "Russian");
	int A[] = { 4,5,8,20,30,93,57,123 }; int i; int k;
	cout << "k=" << endl;
	cin >> k;
	for (i = 0; i < size(A); i++)
	{
		
		if (*(A + i) < k)
			
		{
			
			cout << i << "\t ";
			
			
		}
	}
	cout << endl;
	for (i = 0; i < size(A); i++)
	{

		if (*(A + i) > k)

		{

			cout << i << "\t ";


		}
	}
	cout << endl;
	for (i = 0; i < size(A); i++)
	{

		if (*(A + i) == k)

		{

			cout << i << "\t ";


		}
	}
	

}
int main()
{
	pointer1();
	pointer2();
	pointer3();
}
