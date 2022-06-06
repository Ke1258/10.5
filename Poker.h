#ifndef POKER
#define POKER
#include<string>
#include<iostream>

using namespace std;
class Poker 
{
private:
    int poker[53];     //撲克
    double pokerValue[53]; //撲克代表的數值
    string pokerName[53]; //撲克名
    int money;   //玩家錢數  
    int bet;     //玩家的賭注
public:
    Poker();
    void inputBet();            //玩家輸入賭注
    int getmoney();
    int getbet();
    void setbet(int);
    void setmoney(int);
    int getPorker(int);
    double getPorkerValue(int);
    string getPorkerName(int);
};

#endif
