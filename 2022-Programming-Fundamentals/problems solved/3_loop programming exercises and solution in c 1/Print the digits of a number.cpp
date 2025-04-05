#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double count=0;
	double num;
	cout<<"Enter any number: ";
	cin>>num;
	while(num!=0){
	num=num/10;
	num=trunc(num);
//	num=round(num);
	++count;
	}
	cout<<"Total digits:";
	cout<<count;
	return 0;
}
