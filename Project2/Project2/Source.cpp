
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
//Вариант 3

void integral1 () {
	double n = 200, a = 1, b = 6, x = a;
	double h, s = 0;
	h = (b - a) / n;
	while (x < (b - h)) {
		s += h * (1 + pow(x, 3) + (1 + pow(x, 3)+h ) )/ 2;
		x += h;
	}
	cout << "s=" << s << endl;
}


void integral2() {
	double a = 1, b = 6, h, i = 1, s1 = 0, s2 = 0, n = 200, x, z;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	while (i < n) 
	{
		s2 += 1+pow(x,3);
		x += h;
		s1 +=1+pow(x,3);
        x += h;
		i++;
	}
	z = h /3 * (1 + pow(a, 3) + 4 * (1 + pow(a,3)+h ) + 4 * s1 + 2*s2 + (1 + pow(b, 3)));
	cout << "z=" << z << endl;
}


void integral3() {
	double a = 1, b = 6, e = 0.0001, x, x1;
	if (((pow(a, 3) + 2*a - 1) * (3 * pow(a, 2) + 2)) > 0) {
		x1 = a;
	}
	else {
		x1 = b;
	}
	x = x1;
	while (abs(x1 - x) > e) {
		x1 = x - ((pow(x, 3) + 2*x - 1) / (3 * pow(x, 2) + 2) > 0);
		x = x1;
	}
	cout << "x=" << x << endl;

}


void integral4()
{
	double a = 1, b = 6, e = 0.0001, x;
	while (abs(a - b) > 2 * e)
	{
		x = (a + b) / 2;
		if ((pow(x, 3) + 2 * x - 1) * (pow(a, 3) + 2 * a - 1)>=0) 
		{
			b = x;
		}
		else {
			a = x;
		}
		
	}
	cout << "x=" << x << endl;
}
int main() {
	integral1();
	integral2();
	integral3();
	integral4();
	system("pause");
}


