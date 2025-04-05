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
	void show();
};
int main(){
	int a,b,c,d,e,f;
	cout<<"enter age of person1:";
	cin>>a;
	cout<<"enter height of person1:";
	cin>>b;
	cout<<"enter age of person2:";
	cin>>c;
	cout<<"enter height of person2:";
	cin>>d;
	cout<<"enter age of person3:";
	cin>>e;
	cout<<"enter height of person3:";
	cin>>f;
	person p1(a,b);
	person p2(c,d);
	person p3(e,f);
	

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


