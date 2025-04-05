#include <iostream>
using namespace std;
int main(){
	char start;
	char end;
	cout<<"Enter start alphabet : "<<endl;
	cin>>start;
	cout<<"Enter end alphabet : "<<endl;
	cin>>end;
	cout<<"alphabet from "<<start<<" to "<<end<<" :"<<endl;
	while(start<=end){
		cout<<start<<endl;
		start++;
	}return 0;
	}			
