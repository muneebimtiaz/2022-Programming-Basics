#include <iostream>
using namespace std;
int main(){
	int i=1;
	int sum=0;
	int anyNumber;
	cout<<"Enter any Number: "<<endl;
	cin>>anyNumber;
	cout<<"Sum 0f Natural numbers from 1 to "<<anyNumber<<" :"<<endl;
	while(i<=anyNumber){
		sum=sum+i;
		i++;
	}
	cout<<sum;
	return 0;
	}			
