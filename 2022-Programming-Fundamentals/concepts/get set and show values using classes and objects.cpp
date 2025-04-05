#include <iostream>
using namespace std;
class data
	{
		private:
			int feet;
			int inches;
		public:
			void setvalue(int ft,int in)
			{
				feet=ft;
				inches=in;
			}
			void getvalue()
			{
				cout<<"enter feet: ";
				cin>>feet;
				cout<<"enter inch: ";
				cin>>inches;
			}
			void showvalue()
			{
				cout<<"feets:"<<feet<<endl;
				cout<<"inches:"<<inches<<endl;
			}
	};
int main(){	
	data d1,d2;
	
	d1.setvalue(6,1);
	d2.getvalue();
	d1.showvalue();
	d2.showvalue();
	
	return 0; 
}

