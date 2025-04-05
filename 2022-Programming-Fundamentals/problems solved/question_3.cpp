#include<iostream>
using namespace std;
int main(){
    int totalMarks=100;
    double obtainedMarks;
    cout<<"enter you marks:"<<endl;
    cin>>obtainedMarks;
    if(obtainedMarks>=90 && obtainedMarks<=100){
        cout<<"grade A";
    }
    else if(obtainedMarks>=80 && obtainedMarks<=89){
        cout<<"grade B";
    }
    else if(obtainedMarks>=70 && obtainedMarks<=79){
        cout<<"grade C";
    }
    else if(obtainedMarks>=60 && obtainedMarks<=69){
        cout<<"grade D";
    }
    else{
        cout<<"grade F";
    }      
    return 0;
}