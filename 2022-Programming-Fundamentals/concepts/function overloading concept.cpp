#include <iostream>
using namespace std;
//function declartion
void repchar(char ch,int n)
	{
	 for(int j=0;j<n;j++)
	 {
	 	cout<<ch;
	 }	
	}
int main()
{
//calling a function
	 repchar('*',17);
	 repchar('_',23);
	 repchar('?',14);
	return 0;
}
//function definition

