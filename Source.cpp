
#include<iostream>
#include"Poker.h"
#include "Deal.h"
#include "WonAndLose.h"
using namespace std;

int main() {
    int choose = 1;
    WonAndLose poker;
    cout << "****************** 歡迎玩十點半遊戲 ******************" << endl << endl;
    poker.inputBet();
    poker.initPoker();                   //洗牌

    while (choose == 1 || choose == 2 || choose == 3 || choose == 4)
    {
        cout << "1.要牌 2.不要牌 3.重新開始 4.退出  >>請輸入數字選擇操作:";
        cin >> choose;
        if (choose == 1)            poker.farmerAsk();
        else if (choose == 2)      poker.landlordProcess();
        else if (choose == 3)      poker.newGame();
        else if (choose == 4)      exit(0);
    }

    return 0;
    

}