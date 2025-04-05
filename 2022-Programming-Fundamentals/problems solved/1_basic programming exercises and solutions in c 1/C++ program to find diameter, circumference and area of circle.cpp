#include <iostream>
using namespace std;
int main(){
		float rad,dia,cir,area;
		cout<<"enter radius of a circle: ";
		cin>>rad;
		dia=2*rad;
		cir=2*3.14*rad;
		area=3.14*(rad*rad);
		cout<<"diameter of circle: "<<dia<<endl;
		cout<<"circumference of circle: "<<cir<<endl;
		cout<<"area of a circle: "<<area<<endl;
	return 0;
}
