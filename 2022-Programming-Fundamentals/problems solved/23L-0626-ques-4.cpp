#include<iostream>
using namespace std;

int main() {
    int player1Choice,player2Choice;

    cout<<"Enter the first player's choice (1 for Paper, 2 for Rock, 3 for Scissors): ";
    cin>>player1Choice;

    cout<<"Enter the second player's choice (1 for Paper, 2 for Rock, 3 for Scissors): ";
    cin>>player2Choice;

    if(player1Choice == player2Choice){
        cout<<"This is a Draw."<<endl;
    }else if((player1Choice==1&&player2Choice==2) ||
              (player1Choice==2&&player2Choice==3) ||
              (player1Choice==3&&player2Choice==1)) {
        cout<<"Player 1 wins."<<endl;
    }else{
    cout<<"Player 2 wins."<<endl;
    }

    return 0;
}
