#include <iostream>
using namespace std;
class number{
	private:
		int areacode;
		int exchange;
		int number;
	public:
		void input()
		{	
			cout<<"Please enter the values :"<<endl;
			cout<<"enter area code:";
			cin>>areacode;
			cout<<"enter exchange:";
			cin>>exchange;
			cout<<"enter number:";
			cin>>number;
		}
		void output()
		{
			cout<<areacode<<"-"<<exchange<<"-"<<number<<endl;
		}
		
};

int main(){	
	number p1,p2;
	p1.input();
	
	
	p1.output();
	p2.input();
	p2.output();
	
	return 0; 
}

