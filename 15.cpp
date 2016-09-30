#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int a, b, c;
	cin >> a >> b >> c;
	double La = sqrt(b*c*((b + a)*(b + a) - a*a))/(b + c);
	double Lb = sqrt(a*c*((a + c)*(a + c) - b*b))/(a + c);
	double Lc = sqrt(a*b*((a + b)*(a + b) - c*c))/(a + b);
		cout << La << endl;
		cout << Lb << endl;
		cout << Lc << endl; 
	return 0;
}