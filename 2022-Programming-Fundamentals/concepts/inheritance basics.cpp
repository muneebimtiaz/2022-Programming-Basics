#include <iostream>
#include <string>
using namespace std;
class animal{
	protected:
		
	public:
		void walk(){
			cout<<"walking"<<endl;
		}
		void eat(){
			cout<<"eating"<<endl;
		}
		
};
class dog:public animal{
	public:
		void talk(){
			cout<<"bark"<<endl;
		}
};
class cat:public animal{
	public:
		void talk(){
			cout<<"meow"<<endl;
		}
};
class bear:public animal{
	public:
		void talk(){
			cout<<"growl"<<endl;
		}
};
int main(){
	dog d;
	cat c;
	bear b;
	
	cout<<"dog is ";
	d.eat();
	cout<<"dog sound ";
	d.talk();
	cout<<"bear sound ";
	b.talk();
	cout<<"cat is ";
	c.walk();
	cout<<"cat sound ";
	c.talk();
	return 0;	
}



