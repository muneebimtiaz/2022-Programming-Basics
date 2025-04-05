#include<iostream>
using namespace std;
int main(){
	string sentence="have a good day";
	cout<<sentence.size()<<endl;
	cout<<sentence[7]<<endl;
	cout<<sentence.find("good",0)<<endl;
	cout<<sentence.substr(7,4)<<endl;
	return 0;
}
