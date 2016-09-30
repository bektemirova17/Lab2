#include <iostream>
#include <cmath>

using namespace std;

int main () {      
	int a, b, c;
	cin >> a >> b >> c;
	double p = (a + b + c)/2;
	double S = sqrt (p*(p - a)*(p - b)*(p - c));
	double Ha = 2*S/a;
	double Hb = 2*S/b;
	double Hc = 2*S/c;
	cout << Ha << endl;
	cout << Hb << endl;
	cout << Hc << endl; 
	return 0;
}