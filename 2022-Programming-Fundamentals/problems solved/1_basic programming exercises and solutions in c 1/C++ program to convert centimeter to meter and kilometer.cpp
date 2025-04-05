#include <iostream>
using namespace std;
int main(){
	float cm,m,km;
	cout<<"length in centimeter: ";
	cin>>cm;
//	cm to m
    m=cm*0.01;
//	m to km
	km=m*0.001;
	cout<<"length in meters are: "<<m<<endl;
	cout<<"length in kilometers are: "<<km<<endl;
	return 0;
}
