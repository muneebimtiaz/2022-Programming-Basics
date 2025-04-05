#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter any number to check even or odd: ";
	cin>>num;
	if(num%2==0){
		cout<<"given number is even";
	}else{
		cout<<"given number is odd";
	}
	return 0;
}
