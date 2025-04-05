#include <iostream>
#include <string>
using namespace std;

//int sum(int,int);
//int sum(int&,int&);
int sum(int*,int*);

int main(){
//	//passing by value
//	cout<<sum(6,6);

//	//passing by variable
//	int num1,num2;
//	cin>>num1>>num2;
//	cout<<sum(num1,num2);
	
//	//passing by reference
//	int num1,num2;
//	cin>>num1>>num2;
//	cout<<sum(num1,num2);
//	
	//passing by pointer
	int num1,num2;
	cin>>num1>>num2;
	cout<<sum(&num1,&num2);
	
}
//	//function declaration for passing by value & variable
//	int sum(int a,int b){
//		return a+b;
//	} 

//	//function declaration for passing by reference
//	int sum(int &a,int &b){
//		return a+b;
//	}

	//function declaration for passing by pointer
int sum(int *a,int *b){
	return *a + *b;
}


