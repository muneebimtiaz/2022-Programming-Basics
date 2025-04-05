#include <iostream>
using namespace std;
int main(){
	int year;
	cout<<"input year: ";
	cin>>year;
	if(year%4==0){
		cout<<year<<" is a leap year.";
	}
	else{
		cout<<year<<" is NOT a leap year.";
	}
	return 0;
}
