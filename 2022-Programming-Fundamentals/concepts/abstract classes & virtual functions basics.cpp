#include <iostream>
using namespace std;
class base{			//abstract class
	public:
		virtual void fun()=0; //pure virtual function
};
class derived:public base{
	public:
		void fun(){
			cout<<"this is for fun";
		}
};

int main(){
	base *bptr;
	derived d1;
	bptr=&d1;
	bptr->fun();
	
    return 0;
}
//you cannot create objects of the abstract class directly.
//However, you can create pointers or references of the abstract class type.
//This allows you to use polymorphism and treat objects of derived classes 
//as objects of the abstract class.

