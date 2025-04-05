#include <iostream>
using namespace std;
int main(){
	int fact=1;
	int num;
    cout<<"enter num:";
	cin>>num;


    int j=num;
    
    while (j>0){
        fact=fact*j;
        j--;
    }

    cout<<fact;	

    return 0;
}


