#include <iostream>
using namespace std;
int main(){
	int i=1;
	int sum=0;
	int num;
	cout<<"odd number between 1 to to : "<<endl;
	cin>>num;
	cout<<"Sum of all odd number between 1 to "<<num<<" is: "<<endl;
	while(i<num){
		sum=sum+i;
		i=i++ + 2;
		
	}	
	cout<<sum;
	return 0;
}
