#include<iostream>
#include<iostream>
#include<fstream>
using namespace std;

class person{
	public:
	string name; 
	int id;
		
};
int main()
{
	int c=1;	
	person p1;
	fstream sample;
	sample.open("xxx.dat",ios::out|ios::binary);
	sample.write((char*)&p1,sizeof(p1));
	int i=0;
	while(i<2){
	cout<<"Enter id of person "<<c<<endl;
	cin>>p1.id;
	cout<<"Enter Name of person "<<c<<endl;
	cin>>p1.name;
	i++;
	c++;
	}	
	sample.close();
	
	sample.open("xxx.dat",ios::in|ios::binary);
	sample.read((char*)&p1,sizeof(p1));
	int j=0;
	while(j<2){
	cout<<"id"<<endl;
	cout<<p1.id<<endl;
	cout<<"Name"<<endl;
	cout<<p1.name<<endl;
	j++;
	}
	sample.close();
	

	
	

}

