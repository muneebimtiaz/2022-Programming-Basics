#include <iostream>
using namespace std;
int main(){
		int num1,num2;
		cout<<"please enter a number: ";
		cin>>num1;
		cout<<"please enter another number: ";
		cin>>num2;
		if(num1>num2){
			cout<<"Maximum between "<<num1<<" and "<<num2<<"is:"<<num1<<endl;
		}
		else if (num1<num2){
			cout<<"Maximum between "<<num1<<" and "<<num2<<" is: "<<num2<<endl;
		}
		else{
			cout<<"both numbers are equal";
		}
	return 0;
}
