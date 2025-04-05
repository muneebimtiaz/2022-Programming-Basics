#include <iostream>
using namespace std;
int main(){
	int units;
	float sum=0,a=0,b=0,c=0,d=0,per,total;
	cout<<"Enter total units consumed: ";
	cin>>units;
	
if(units>50)
{
	if(units>=50){
		units=units-50;
		a=50*0.50;
	}if(units>=100){
		units=units-100;
		b=100*0.75;
	}if(units>=100){
		units=units-100;
		c=100*1.25;
	}if(units>=1){
		d=units*1.50;
	}
	sum=(a+b+c+d);
	per=sum*0.2;
	total=sum+per;
	
	cout<<"Electricity Bill: "<<total;
}
else if(units<=50){
		sum=units*0.50;
		per=sum*0.2;
		total=sum+per;
	
		cout<<"Electricity Bill: "<<total;
}
	return 0;
}
