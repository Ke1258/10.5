
#include<iostream>
#include"Poker.h"
#include "Deal.h"
#include "WonAndLose.h"
using namespace std;

int main() {
    int choose = 1;
    WonAndLose poker;
    cout << "                      �Q�I�b�C��" << endl << endl;
    poker.inputBet();
    poker.initPoker();                   //�~�P

    while (choose == 1 || choose == 2 || choose == 3 || choose == 4)
    {
        cout << "1.�n�P 2.���n�P 3.���s�}�l 4.�h�X  >>�п�J:";
        cin >> choose;
        if (choose == 1)            poker.farmerAsk(); //�����a�P�çP�_���S��>10.5
        else if (choose == 2)      poker.landlordProcess();//���n�P��P�_��Ĺ
        else if (choose == 3)      poker.newGame();//���s�}�l�k�sbet
        else if (choose == 4)      exit(0);
        else poker.landlordProcess();
    }

    return 0;
    

}