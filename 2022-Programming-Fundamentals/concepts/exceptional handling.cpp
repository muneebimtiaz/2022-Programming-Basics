#include <iostream>
using namespace std;
int main() {
	int num,dnum,result;
	cout<<"enter num,dnum:"<<endl;
	cin>>num>>dnum;
	try{
		if(dnum==0){
			throw dnum;
		}
		else{
		result=num/dnum;
		cout<<"result:"<<result;	
		}
		
	}
	catch(int dd){
		cout<<"exception occur: divide by zero is not allowed "<<dd<<endl;
	}
//	cout<<"ans"<<result;
    return 0;
}

