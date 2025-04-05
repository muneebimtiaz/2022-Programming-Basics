#include <iostream>
#include <string>
using namespace std;
class student{
	int rollno;
	string name;
	float per;
	public:
		student(int r,string n,float p):rollno(r),name(n),per(p){
			cout<<"constructor";
		}
//declaration
		void show();
};
int main(){
	int a,d;
	string b,e;
	float c,f;
	cout<<"enter rollno,name,percentage of s1:"<<endl;
	cin>>a>>b>>c;
	cout<<"enter rollno,name,percentage of s2:"<<endl;
	cin>>d>>e>>f;
	student s1(a,b,c);
	cout<<endl;
	student s2(d,e,f);
	
	cout<<"showing:"<<endl;
	s1.show();
	cout<<endl;
	s2.show();
	return 0; 
}

//definition
void student::show(){
			cout<<"roll of student:"<<rollno<<endl;
			cout<<"name of student:"<<name<<endl;
			cout<<"percentage of student:"<<per<<endl;
		}

