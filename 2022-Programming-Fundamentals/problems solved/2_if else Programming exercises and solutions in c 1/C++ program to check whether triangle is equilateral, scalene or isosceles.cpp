#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"input angle a:";
	cin>>a;
	cout<<"input angle b:";
	cin>>b;
	cout<<"input angle c:";
	cin>>c;
	if(a==b && b==c && c==a && a>0 && b>0 && c>0){
		cout<<"triangle is equiletral";
	}
	if(a!=b && b!=c && c!=a && a>0 && b>0 && c>0){
		cout<<"triangle is scalene";
	}
	if(a==b && b!=c || a!=b && b==c ||a!=c && c==b && a>0 && b>0 && c>0){
		cout<<"triangle is isoceles";
	}
	return 0;
}
