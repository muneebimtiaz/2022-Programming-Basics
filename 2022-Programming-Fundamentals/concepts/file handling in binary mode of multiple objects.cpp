#include <iostream>
#include <fstream>
using namespace std;

class student {
    int id;
    string fname;
    float per;

public:
    void set_data() {
        cout << "Enter student id, fullname, and percentage:" << endl;
        cin >> id >> fname >> per;
    }

    void print_data() {
        cout << "Student id, fullname, percentage:" << endl;
        cout << id << endl << fname << endl << per << endl;
    }
};

int main() {
    student s1, s2;
    s1.set_data();
    s2.set_data();
//    s3.set_data();
//    s4.set_data();
//    s5.set_data();

    // Write
    fstream record;
    record.open("studentrecord.dat", ios::out | ios::binary);
    record.write((char*)&s1, sizeof(student));
    record.write((char*)&s2, sizeof(student));
//    record.write((char*)&s3, sizeof(student));
//    record.write((char*)&s4, sizeof(student));
//    record.write((char*)&s5, sizeof(student));
    record.close();

    // Read
    fstream record1;
    record1.open("studentrecord.dat", ios::in | ios::binary);
    record1.read((char*)&s1, sizeof(student));
    record1.read((char*)&s2, sizeof(student));
//    record1.read((char*)&s3, sizeof(student));
//    record1.read((char*)&s4, sizeof(student));
//    record1.read((char*)&s5, sizeof(student));
    record1.close();

    s1.print_data();
    s2.print_data();
//    s3.print_data();
//    s4.print_data();
//    s5.print_data();

    return 0;
}

