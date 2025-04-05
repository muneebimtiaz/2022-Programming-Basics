#include <iostream>
#include <string>
using namespace std;
class employee{
	private:
		string name;
		int id;
		double salary;
	public:
		void get_data(){
			cout<<"enter name of employee:";
			cin>>name;
			cout<<"enter id of employee:";
			cin>>id;
			cout<<"enter salary of employee $:";
			cin>>salary;
		}
		void print_data(){
			cout<<"name of employee:"<<name<<endl;
			cout<<"id of employee:"<<id<<endl;
			cout<<"salary of employee $:"<<salary<<endl;
		}	
};
class manager:public employee{
	private:
		string post;
		int joined;
	public:
		void get_data(){
			employee::get_data();
			cout<<"enter post of manager:";
			cin>>post;
			cout<<"enter joined date:";
			cin>>joined;
		}
		void print_data(){
			employee::print_data();
			cout<<"post of manager:"<<post<<endl;
			cout<<"joined company from:"<<joined<<endl;
		}
};
class writer:public employee{
	private:
		int no;
		char article[50];
	public:
		void get_data(){
			employee::get_data();
			cout<<"enter number of publications last year:";
			cin>>no;
			cout<<"enter last article name:";
			cin.getline(article,50);
		}
		void print_data(){
			employee::print_data();
			cout<<"number of publications last year:"<<no<<endl;
			cout<<"last article name"<<article<<endl;
		}
};
class laborer:public employee{

};
//function prototype
void style();
int main(){
manager m1,m2;
writer w1;
laborer l1;

cout<<"enter details of manager #1:"<<endl;
m1.get_data();
cout<<"enter details of manager #2:"<<endl;
m2.get_data();
cout<<"enter details of writer:"<<endl;
w1.get_data();
cout<<"enter details of laborer:"<<endl;
l1.get_data();
style();
cout<<"details of manager #1:"<<endl;
m1.print_data();
cout<<"details of manager #2:"<<endl;
m2.print_data();
cout<<"details of writer:"<<endl;
w1.print_data();
cout<<"details of laborer:"<<endl;
l1.print_data();

	return 0;	
}
//function declaration
void style(){
	cout<<endl;
	for(int i=0;i<45;i++){
		cout<<"*";
	}
	cout<<endl;
}



