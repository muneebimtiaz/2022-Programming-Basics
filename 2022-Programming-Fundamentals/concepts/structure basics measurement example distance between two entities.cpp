#include <iostream>
using namespace std;
struct Distance
{
	int feet;
	float inches;
};
int main(){
	Distance d1,d3;
	Distance d2={11,6.25};
	cout<<"Enter feet: ";
	cin>>d1.feet;
	cout<<"Enter inches: ";
	cin>>d1.inches;
	d3.inches=d1.inches+d2.inches;
	d3.feet=0;
	while(d3.inches>12.0)
	{
		if(d3.inches>=12.0)
		{
			d3.inches-=12.0;
			d3.feet++;
		}
	}
	d3.feet+=d1.feet+d2.feet;
	cout<<"feet:"<<d3.feet;
	cout<<" inches:"<<d3.inches<<endl;
	return 0;
}
