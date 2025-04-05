#include <iostream>
using namespace std;
int main(){
	int days;
	int years=0;
	int weeks=0;
	cout<<"enter days:";
	cin>>days;
	while(days>=365){
		days=days-365;
		years++;
	}
	cout<<"years :"<<years<<endl;
	while(days>=7){
		days=days-7;
		weeks++;
	}
	cout<<"weeks :"<<weeks<<endl;
	cout<<"days :"<<days<<endl;
	return 0;
}
