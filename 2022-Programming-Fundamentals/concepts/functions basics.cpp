#include <iostream>
using namespace std;
void sayMyName(string name,int age){
	cout<<"hello!this is "<<name<<".Nice to meet you."<<endl;
	cout<<"I am "<<age<<" years old."<<endl;
}
int main(){
	cout<<"top......."<<endl;
	sayMyName("david",20);
	sayMyName("jason",33);
	sayMyName("john",45);
	cout<<"bottom......"<<endl;
	
	return 0;
}
