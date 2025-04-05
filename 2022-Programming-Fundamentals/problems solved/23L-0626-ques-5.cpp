#include <iostream>
using namespace std;

int main() {
    int code;
    cout << "Enter Code: ";
    cin >> code; 
    if(code >= 12 && code <= 40) {
        cout << "Location is Lahore" << endl;
    }else if(code >= 41 && code <= 50) {
        cout << "Location is Islamabad" << endl;
    }else if(code >= 51 && code <= 70) {
        cout << "Location is Karachi" << endl;
    }else{
        cout << "Invalid Code!" << endl;
    }
    return 0;
}
