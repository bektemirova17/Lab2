#include <iostream>
#include <cmath>

using namespace std;
	int main () {
	int a, b, c;
	cin >> a >> b >> c ;
	double p = (a + b + c)/2.0;
	double s = sqrt(p*(p-a)*(p-b)*(p-c));
		cout << p << endl;
		cout << s;
	return 0;
}