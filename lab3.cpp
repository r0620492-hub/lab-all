#include <iostream>
#include <iomanip>
#include<math.h>
using namespace std;
int main()
{
	float a, b, h, x, y, s, p;
	int n, i;
	cout << "Vvedite a" << endl;
	cin >> a;
	cout << "Vvedite b" << endl;
	cin >> b;
	cout << "Vvedite h" << endl;
	cin >> h;
	cout << "Vvedite n" << endl;
	cin >> n;
	x = a;
	do
	{
		p = s = 1;
		for (i = 1; i <= n; i++)
		{
			p = pow(x, 2 * i) / (2 * i);
			s += p;
		}
		y = (exp(x) + exp(-x)) / 2;
		cout << setw(15) << x << setw(15) << y << setw(15) << s << endl;
		x += h;
	} while (x <= b + h / 2);
	cout << endl;
	return 0;
}