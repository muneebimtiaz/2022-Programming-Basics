#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int base,exponent,powerOfnum;

	cout<<"enter base: ";
	cin>>base;
	cout<<"enter exponent: ";
	cin>>exponent;
	powerOfnum=pow(base,exponent);
	cout<<powerOfnum;
	return 0;
}
