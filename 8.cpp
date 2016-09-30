#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int R1, R2, R3;
	cin >> R1 >> R2 >> R3;
	double R = R1*R2*R3/(R1 * R2 + R2 * R3 + R1 * R3);
		cout << R;
	return 0;
}