#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Please enter a number : ";
	cin>>num;
	if(num>0){
		cout<<"number is POSITIVE";
	}
	else if(num<0){
		cout<<"number is NEGATIVE";
	}
	else if(num==0){
		cout<<"number is ZERO";
	}
//	else{0
//		cout<<"Unexpected error";
//	}
	return 0;
}
