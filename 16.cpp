#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int X1, Y1, X2, Y2;
	cin >> X1 >> Y1 >> X2 >> Y2;
	double W = sqrt ((X2 - X1)*(X2 - X1) + (Y2 - Y1)*(Y2 - Y1));
		cout << W;
	return 0;
}