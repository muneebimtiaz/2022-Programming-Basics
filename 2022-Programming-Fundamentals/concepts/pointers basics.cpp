#include <iostream>
#include <string>
using namespace std;
int main(){
	//array notation
//	int arr[5]={44,33,6,4,86};
//	
//	for(int i=0;i<5;i++){
//		cout<<arr[i]<<endl;
	//array with pointer notation
	int arr[5]={44,33,6,4,86};
	
	for(int i=0;i<5;i++){
		cout<<*(arr+i)<<endl;
	}
	return 0;
}


