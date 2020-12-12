#include <stdio.h>
#include<iostream>
using namespace std;
void main()
{
	char s[256],s2[256];
	int i; int l; int k=0;
	puts("Enter string: ");
	gets_s(s);
	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == '*')
		{
			i++;
			while (s[i] != '*' && s[i]!=0)
			{
				s2[k] = s[i];
				k++;
			}
		}

	}
	for (l = 0; l < k; l++)
	{
		cout << s2[l] << endl;
	}

}

/*
{
	char s[256];
	int i;
	puts("Enter string: ");
	gets_s(s);
	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == '*')
		{
		
			i--;

		}



	}
	cout << s[i] << endl;
}
*/