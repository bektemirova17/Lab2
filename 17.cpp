#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int X, Y, Z; 
	cin >> X >> Y >> Z;
	float a, b;
	a = (sqrt (abs(X - 1)) - pow(abs(Y), (1.0/3.0)))/(1 + X*X/2 + Y*Y/4);
 	b = X*(atan(Z) + exp(-(X+3)));
	cout << a << endl;
	cout << b;
	return 0;
}