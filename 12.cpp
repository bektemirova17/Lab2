#include <iostream>
#include <cmath>

using namespace std;

int main () {
	double a, b, q;
  	cin >> a >> b >> q;	
	double w = tan ( (  q / 180 ) * M_PI );
	double c = (b-a)/2;
	double h = c*w;
	double S = ( a + b ) * h / 2.0;
	cout << S << endl;
	return 0;
}