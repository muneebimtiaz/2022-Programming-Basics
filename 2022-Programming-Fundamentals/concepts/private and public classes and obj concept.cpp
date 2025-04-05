#include <iostream>
using namespace std;
class adding
{
	private:
		int a,b;
	public:
		int sum(int a, int b)
		{
			return a+b;
		}
};
// function declaration
void show(int,int);
int main()
{
//creating int a and b for intmain() body	
	int a;
	int b;
	cin>>a>>b;
//function calling
	show(a,b);

//int a and b of class created early 	
	adding a1;
	cout<<a1.sum(15,15);
	return 0; 
}
//function definition
void show(int x,int y)
{
	cout<<"value: "<<x<<endl;
	cout<<"value: "<<y<<endl;
}
