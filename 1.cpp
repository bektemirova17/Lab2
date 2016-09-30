#include <iostream>
#include <cmath>
using namespace std;
int main(){
int A,B,C,H;
cin>>A,B,C,H;
double p,S,V;
p=(A+B+C)/2;
S=sqrt(p*(p-A)*(p-B)*(p-C));
V=(S*H)/3;
cout<<V;
return 0;
}