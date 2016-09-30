#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
	int a, b, c;
	cin >> a >> b >> c;
	double p = (a + b + c)/2.0;
	double r = sqrt ( (p-a) * (p-b) * (p-c)/p );
	cout << r;
	return 0;
}