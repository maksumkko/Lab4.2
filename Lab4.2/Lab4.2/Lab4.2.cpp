#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, A=0, B, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(15) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x < 0)
		{
			B = 1 + (4 * pow(x, 2));
		}
		else
		{
			if (0 <= x && x <= 2)
			{
				B = pow(exp(x) + fabs(x), 2);
			}
			else
			{
				if (x > 2)
				{
					B = 5 * sin(pow(x, 2) + 1);
				}
			}
		}
		y = A + B;
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(15) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}

	cout << "---------------------------" << endl;

	return 0;
}