#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int R1, R2;
	cin >> R1;
	R2 = 20;
	double S1 = 3.14*R1*R1;
	double S2 = 3.14*R2*R2;
	double S = S1 - S2;
	cout << S;
	return 0;
}