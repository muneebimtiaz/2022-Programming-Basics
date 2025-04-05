#include<iostream>
using namespace std;
int main(){
    int sentinal=-1;
    int sum=0;
    int num;
    cout<<"enter num:";
    cin>>num;


    while(num!=sentinal){
       cout<<"enter num:";
        cin>>num;
        sum=sum+num;

    }
    cout<<sum;

    return 0;
}