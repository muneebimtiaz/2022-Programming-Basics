#include <iostream>
using namespace std;
class person{
	private:
	int age;
	int height;
	public:
	person(int a,int h) : age(a),height(h){
		cout<<"i am a constructor"<<endl;
	}
//	void input(int,int);
	void show();
};
int main(){

	person p1(55,434);
	person p2(34,55);
	person p3(34,333);
	
//	int a,b;
//	cin>>a>>b;
//	p1.input(a,b);
	p1.show();
	cout<<endl;
	p2.show();
	cout<<endl;
	p3.show();
	
	return 0;
}

void person::show(){
	cout<<"age of person:"<<age<<endl;
	cout<<"height of person:"<<height;
}


