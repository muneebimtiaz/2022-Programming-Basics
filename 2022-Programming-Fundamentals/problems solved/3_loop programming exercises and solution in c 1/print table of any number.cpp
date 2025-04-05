#include <iostream>
using namespace std;
int main(){
	int ans;
	int num;
	int i=1;
	cout<<"Enter number to print table of:";
	cin>>num;
	while(i<=10){
		ans=num*i;
		cout<<num<<"*"<<i<<"="<<ans<<endl;
		i=i++ + 1;
	}
	return 0;
}
