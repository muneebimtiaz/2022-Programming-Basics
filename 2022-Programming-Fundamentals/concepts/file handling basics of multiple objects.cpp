#include <iostream>
#include <fstream>
using namespace std;
class student {
public:
    int id;
    string fname;
    float per;

public:
    void get_data() {
        cout << "Enter student id, fullname, and percentage: ";
        cin >> id >> fname >> per;
    }

    void print_data() {
        cout << "Student id, fullname, percentage: ";
        cout << id << endl << fname << endl << per << endl;
    }
};

int main() {
    student s1, s2;
    s1.get_data();
    s2.get_data();

    // Write
    fstream record;
    record.open("student.txt", ios::out | ios::app);
    record << s1.id << ' ' << s1.fname << ' ' << s1.per << endl;
    record << s2.id << ' ' << s2.fname << ' ' << s2.per << endl;
    record.close();

    // Read
    record.open("student.txt", ios::in);
    record >> s1.id; record >> s1.fname; record >> s1.per;
    record >> s2.id; record >> s2.fname; record >> s2.per;
    record.close();

    s1.print_data();
    s2.print_data();

    return 0;
}

