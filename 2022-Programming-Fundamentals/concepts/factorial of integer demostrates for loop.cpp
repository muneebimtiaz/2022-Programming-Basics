#include <iostream>
using namespace std;
int main(){
	int fact=1;
	int num;
	cin>>num;
	


	for(int j=num;j>0;j--)
	{
		fact*=j;
	}

	cout<<fact;		
	return 0;
}
	
