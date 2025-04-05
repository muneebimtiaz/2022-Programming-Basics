#include <iostream>
using namespace std;
int main(){
	double num1,num2;
	double sum,sub,multiply,product;
	double modulus;
	cout<<"enter a number: ";
	cin>>num1;
	cout<<"enter a number: ";
	cin>>num2;
	sum=num1+num2;
	sub=num1-num2;
	multiply=num1*num2;
	product=num1/num2;
//	modulus=num1%num2;
	cout<<"sum  :"<<sum<<endl;
	cout<<"difference :"<<sub<<endl;
	cout<<"product :"<<product<<endl;
	cout<<"multiply :"<<multiply<<endl;
	cout<<"modulus :"<<modulus<<endl;
	return 0;
}
