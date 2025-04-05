#include <iostream>
#include <string>
/*Protected members are not directly accessible from outside 
the class hierarchy, such as from objects of unrelated classes 
or functions outside the class.*/
using namespace std;
class abc{
	protected:
		int x=10;
		int y=11;
	public:
		void disp(){
				cout<<x;
	// private:
	// 	int z=12;		
};
};
class xyz:public abc{
	public:
		void disp(){
				cout<<x;
		}
	
	int m=13;
	
};

int main(){
	abc chk; 
	chk.disp();
	return 0;	
}


