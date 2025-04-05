#include <iostream>
using namespace std;
int main(){
	float length;
	float width;
	float perimeter;
	cout<<"enter length of rectangle: ";
	cin>>length;
	cout<<"enter width of a rectangle: ";
	cin>>width;
	perimeter=2*(length+width);
	cout<<perimeter;
	return 0;
}
