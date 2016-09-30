#include <iostream>
#include <cmath>
using namespace std;
int main(){
int R,r,h;
cin>>R>>r>>h;
double V,S,l;
V=(h/3)*((R*R)+(r*r)+(R*r));
l=sqrt((h*h)+((R-r)*(R-r)));
S=l*(R+r)+((R*R)+(r*r));
cout<<V <<"pi" <<endl;
cout<<l <<endl;
cout<<S <<"pi" <<endl;
return 0;
}