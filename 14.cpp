#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int a, b, c;
	cin >> a >> b >> c;
	double Ma = sqrt (2*(b*b + c*c) - a*a)/2.0;
	double Mb = sqrt (2*(a*a + c*c) - b*b)/2.0;
	double Mc = sqrt (2*(a*a + b*b) - c*c)/2.0;
		cout << Ma << endl;
		cout << Mb << endl;
		cout << Mc << endl;
	return 0;
}