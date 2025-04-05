#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int fourth;
	int j=1;
	while(j<=9)
	{
		fourth=j*j*j*j;
		cout<<setw(2)<<j
		    <<setw(6)<<fourth<<endl;
		    j++;
	}
	return 0;
}
	
