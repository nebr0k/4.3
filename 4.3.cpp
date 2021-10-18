//Kоцюба Остап в-4
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double  x, xp, xk, dx, a, b, c, F;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "c = "; cin >> c;
	cout << "b = "; cin >> b;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << setw(4) << " |"
		<< setw(6) << "F" << setw(6) << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (c < 0 && x != 0)
			F = (-a) * x - c;
		else
			if (c > 0 && x == 0)
				F = (x - a) / (-c);
			else
				F = b * x / (c - a);
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(2) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}