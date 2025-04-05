#include <iostream>
#include <string>
using namespace std;
int main(){
	int var=15;
	int *ptr;
	ptr=&var;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;

	return 0; 
}


