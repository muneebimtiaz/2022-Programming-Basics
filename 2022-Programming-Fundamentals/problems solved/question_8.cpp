#include <iostream>

using namespace std;

int main() {
    int scoreCard = 0;
    
    cout << "Question 1: What is 2 + 2?" << endl;
    int ans1;
    cin >> ans1;
    if (ans1 == 4) {
        cout << "Correct!" << endl;
        scoreCard++;
    } else {
        cout << "Wrong! The correct answer is 4." << endl;
    }
    
    cout << "Question 2: What is 5 - 3?" << endl;
    int ans2;
    cin >> ans2;
    if (ans2 == 2) {
        cout << "Correct!" << endl;
        scoreCard++;
    } else {
        cout << "Wrong! The correct answer is 2." << endl;
    }
    
    cout << "Question 3: What is 4 * 6?" << endl;
    int ans3;
    cin >> ans3;
    if (ans3 == 24) {
        cout << "Correct!" << endl;
        scoreCard++;
    } else {
        cout << "Wrong! The correct answer is 24." << endl;
    }
    
    cout << "Your scoreCard: " << scoreCard << endl;
    
    return 0;
}
