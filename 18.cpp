#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int X, Y, Z;
	cin >> X >> Y >> Z;
	double a = (1 + Y)*(X + Y/(X*X + 4))/(pow(M_E, (-X-2)) + 1/(X*X + 4));
	double b = (1 + cos(Y - 2))/(X*X*X*X/2 + sin(Z)*sin(Z));
		cout << a << endl;
		cout << b;
	return 0;
}               