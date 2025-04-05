#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter number: ";
	cin>>num;
	if((num%5 && num%11)==0){
		cout<<"Number is divisible by 5 and 11";
	}
	else{
		cout<<"Number is NOT divisible by 5 and 11";
	}
	return 0;
}
