#include <iostream>
using namespace std;
int main(){
	float num1,num2;
	char oper;
	

    do{
        cout<<"enter the first number"<<endl;
        cin>>num1;
        cout<<"enter the second number"<<endl;
        cin>>num2;
        cout<<"select an operator + , - , * , /"<<endl;
        cin>>oper;
    }while (num1==0 || num2==0);

        if(oper=='+'){
            cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
        }else if(oper=='-'){
            cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
        }else if(oper=='*'){
            cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
        }else if(oper=='/'){
            cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
        }

        
	return 0;
}