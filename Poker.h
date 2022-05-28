#ifndef POKER
#define POKER
#include<string>
#include<iostream>
using namespace std;
class Poker 
{
private:
    int poker[53];     //撲克
    int pokerValue[53]; //撲克代表的數值
    string pokerName[53]; //撲克名
    int money;   //玩家錢數  
    int bet;     //玩家的賭注
public:
    Poker();
    void inputBet();            //玩家輸入賭注
    void newGame();
    string getPokerF();  //用字串的形式返回玩家的牌
    string getPokerL();  //用字串的形式返回莊家的牌
    int getPorker();
    int getPorkerValue();
    string getPorkerName();
}

#endif
