#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int num;
	int first;
	int last;
	cout<<"Enter a number : ";
	cin>>num;
	
	last=num%10;
	
	while(num>=9){
		num=num/10;
		num=round(num);	
	}
	cout<<"First Digit : ";
	cout<<num<<endl;

	cout<<"Last Digit : ";
	cout<<last<<endl;
	
	cout<<"sum of first and last digit is: "<<num+last<<endl;
 
	return 0;
}
