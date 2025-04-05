#include <iostream>
using namespace std;
class base{	
	public:
	int a;
	int b;
	base(int xx,int yy):a(xx),b(yy){
	};
};
class derived:public base{

};

int main(){
	int y,z;
	cout<<"enter value of x and y:";
	cin>>y>>z;
	base b1(y,z);
	try{
		if(b1.a==b1.b){
			cout<<"a = b";
		}
		else{
			throw b1.a;
			throw b1.b;
		}
	}
	catch(int){
		cout<<b1.a;
	}
	catch(int){
		cout<<b1.b;
	}
    return 0;
}

