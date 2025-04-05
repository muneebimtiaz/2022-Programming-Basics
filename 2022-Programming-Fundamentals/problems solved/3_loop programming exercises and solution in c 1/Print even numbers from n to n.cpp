#include <iostream>
using namespace std;
int main(){
	int startValue;
	int endValue;
	int result1=0;
	int result2=1;
	
	cout<<"Print even numbers from : "<<endl;
	cin>>startValue;
	cout<<"Print even numbers till : "<<endl;
	cin>>endValue;
	cout<<"All even numbers form "<<startValue<<" to "<<endValue<<" is : ";
	while (startValue<endValue){
		if(startValue%2==0){
			cout<<startValue<<endl;
			startValue=startValue++ +2;
		}else if(startValue%2==1){
			startValue=startValue++ +1;
			cout<<startValue; 
						
		}else{
			cout<<"Error";
		}
	}
	
	return 0;
}
