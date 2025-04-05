#include <iostream>
#include <string>
using namespace std;
class person{
	string name;
	int age;
	public:
		void set_p(){
			cout<<"enter name: ";
			cin>>name;
			cout<<"enter age: ";
			cin>>age;
		}
		void disp_p(){
			cout<<"name: "<<name<<endl;
			cout<<"age: "<<age<<endl;
		}
};
/*person class is privately inherited by student class
means all public member function of person class is 
now private member function of student class*/

class student:private person{
	int rollno;
	string course;
	public:
		void set_s(){
			set_p();
			cout<<"enter rollno: ";
			cin>>rollno;
			cout<<"enter course: ";
			cin>>course;
		}
		void disp_s(){
			disp_p();
			cout<<"rollno: "<<rollno<<endl;
			cout<<"course: "<<course<<endl;
		}
};

int main(){
	student s1,s2;
	cout<<"fill student details #1:"<<endl;
	s1.set_s();
	cout<<"fill student details #2:"<<endl;
	s2.set_s();
	cout<<endl;
	cout<<"*********************************"<<endl;
	cout<<"display student details #1:"<<endl;
	s1.disp_s();
	cout<<"display student details #2:"<<endl;
	s2.disp_s();
		
	return 0;	
}



