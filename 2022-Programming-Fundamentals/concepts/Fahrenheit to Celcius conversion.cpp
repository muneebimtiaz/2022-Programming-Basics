#include <iostream>
using namespace std;
int main(){
//	Fahrenheit to Celsius, subtract 32 and multiply by .5556 (or 5/9)
	float ftemp;
	cout<<"Enter temperature in Fahrenheit: ";
	cin>>ftemp;
	float ctemp=(ftemp-32) * 5/9;
	cout<<"Equivalent in Celsius is: "<<ctemp<<endl;
	return 0;
}
