#include<iostream>
using namespace std;
int main()
{
    bool flag=true;
    int num,counter=1;
    
    cout<<"enter num";
    cin>>num;
    if(num<2){
        cout<<num<<"is nor prime not composite";
    };
    while(flag){
        counter=counter+1;
        if ((num%counter==0)||(num==counter))
            flag=false;
    }
    if(num==counter){
        cout<<num<<"num is a prime number";

    }else{
        cout<<"num is not a prime number";
    }
}