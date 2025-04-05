#include <iostream>
using namespace std;
int main(){
		float percent;
		cout<<"Please enter your percentage: "<<endl;
		cin>>percent;
		if(percent>=90){
			cout<<"Grade A";
		}
		else if(percent>=75){
			cout<<"Grade B";
		}
		else{
			cout<<"Grade C";
		}
	return 0;
}
