#include <iostream>
using namespace std;
int main(){
	int start;
	int end;
	cout<<"Enter start value : "<<endl;
	cin>>start;
	cout<<"Enter end value : "<<endl;
	cin>>end;
	cout<<"Natural numbers from "<<start<<" to "<<end<<" :"<<endl;
	while(start>=end){
		cout<<start<<endl;
		start--;
	}return 0;
	}			
