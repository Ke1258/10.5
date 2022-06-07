
#include<iostream>
#include"Poker.h"
#include "Deal.h"
#include "WonAndLose.h"
using namespace std;

int main() {
    int choose = 1;
    WonAndLose poker;
    cout << "                      十點半遊戲" << endl << endl;
    poker.inputBet();
    poker.initPoker();                   //洗牌

    while (choose == 1 || choose == 2 || choose == 3 || choose == 4)
    {
        cout << "1.要牌 2.不要牌 3.重新開始 4.退出  >>請輸入:";
        cin >> choose;
        if (choose == 1)            poker.farmerAsk(); //給玩家牌並判斷有沒有>10.5
        else if (choose == 2)      poker.landlordProcess();//不要牌後判斷輸贏
        else if (choose == 3)      poker.newGame();//重新開始歸零bet
        else if (choose == 4)      exit(0);
        else poker.landlordProcess();
    }

    return 0;
    

}