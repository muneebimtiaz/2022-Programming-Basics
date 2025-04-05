#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int cube;
	for(int j=1;j<=10;j++)
	{
		cube=j*j*j;
		cout<<setw(2)<<j
		    <<setw(6)<<cube<<endl;
	}
	return 0;
}
	
