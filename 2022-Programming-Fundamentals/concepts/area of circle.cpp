#include <iostream>
using namespace std;
int main(){
	const float PI=3.14159;
	float rad;
	cout<<"Enter radius of a circle: ";
	cin>>rad;
	float Area=PI * (rad * rad);
	cout<<"Area of circle: "<<Area;
	cout<<'\n';
	return 0;
}
