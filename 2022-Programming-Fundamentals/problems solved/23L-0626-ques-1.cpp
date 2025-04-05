#include<iostream>
using namespace std;
int main(){
    int orginal=10000;
    int user;
    cout<<"your account balance:"<<orginal<<endl;
    cout<<"enter the amount you want to withdraw:"<<endl;
    cin>>user;
    if(user<=orginal && user>0){
        orginal=orginal-user;
        cout<<"withdraw successfull"<<endl;
        cout<<"remaining balance:"<<orginal;
    }else if(user>orginal ){
        cout<<"you dont have suficient balance";
    }else if(user<0){
        cout<<"please enter a positive number(invalid option)";
    }  
    return 0;
}