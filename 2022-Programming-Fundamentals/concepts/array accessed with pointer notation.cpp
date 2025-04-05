#include <iostream>
// the name of the array is its address.not need to use '&' operator
// you cant increment the address but you can increment the pointer
using namespace std;
int main(){
//	//array accessed with array notation
//	int myarray[5]={44,33,6,4,86};
//	for(int i=0;i<5;i++){
//		cout<<myarray[i]<<endl;

	//array accessed with pointer notation
	int myarray[5]={44,33,6,4,86};
	for(int i=0;i<5;i++){
		cout<<*(myarray+i)<<endl;
	}
	return 0;
}


