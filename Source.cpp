
#include<iostream>
#include"Poker.h"
#include "Deal.h"
#include "WonAndLose.h"
using namespace std;

int main() {
    int choose = 1;
    WonAndLose poker;
    cout << "****************** �w�缾�Q�I�b�C�� ******************" << endl << endl;
    poker.inputBet();
    poker.initPoker();                   //�~�P

    while (choose == 1 || choose == 2 || choose == 3 || choose == 4)
    {
        cout << "1.�n�P 2.���n�P 3.���s�}�l 4.�h�X  >>�п�J�Ʀr��ܾާ@:";
        cin >> choose;
        if (choose == 1)            poker.farmerAsk();
        else if (choose == 2)      poker.landlordProcess();
        else if (choose == 3)      poker.newGame();
        else if (choose == 4)      exit(0);
    }

    return 0;
    

}