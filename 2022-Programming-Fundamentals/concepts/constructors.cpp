#include <iostream>
using namespace std;
class person{
	private:
	int age;
	int height;
	public:
	person() : age(0),height(0){
		cout<<"i am a constructor"<<endl;
	}
	person(int a,int h) : age(a),height(h){
		cout<<"i am a constructor"<<endl;
	}
//	void input(int,int);
	void show();
};
int main(){
	int xx,yy;
	cin>>xx>>yy;
	person p1(xx,yy);
	person p2(31,6);
	person p3;
	
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
//function definition 
/*void person::input(int i,int j){
	age=i;
	height=j;	
}*/
void person::show(){
	cout<<"age of person:"<<age<<endl;
	cout<<"height of person:"<<height;
}


