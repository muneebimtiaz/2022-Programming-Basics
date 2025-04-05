#include <iostream>
using namespace std;
int main(){
	char any;
	cout<<"enter any character: ";
	cin>>any;
	if((any>='a' && any<='z')||(any>='A' && any<='Z')){
		cout<<"Character is an ALPHABET.";
	}else {
		cout<<"Character is not a ALPHABET.";
	}
	return 0;
}
