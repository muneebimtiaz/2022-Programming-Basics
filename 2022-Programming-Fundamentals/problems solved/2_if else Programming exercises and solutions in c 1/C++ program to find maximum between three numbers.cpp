#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter num 1 : ";
	cin>>a;
	cout<<"enter num 2 : ";
	cin>>b;
	cout<<"enter num 3 : ";
	cin>>c;
	if(a>b && a>c){
		cout<<"Maximum is : "<<a<<endl;
	}
	else if(b>a && b>c){
		cout<<"Maximum is : "<<b<<endl;
	}
	else if(c>a && c>b){
		cout<<"Maximum is : "<<c<<endl;
	}
	else{
		cout<<"Please dont enter same numbers";
	}
	return 0;
}
