#ifndef POKER
#define POKER
#include<string>
#include<iostream>

using namespace std;
class Poker 
{
private:
    int poker[53];     //���J
    double pokerValue[53]; //���J�N���ƭ�
    string pokerName[53]; //���J�W
    int money;   //���a����  
    int bet;     //���a����`
public:
    Poker();
    void inputBet();            //���a��J��`
    int getmoney();
    int getbet();
    void setbet(int);
    void setmoney(int);
    int getPorker(int);
    double getPorkerValue(int);
    string getPorkerName(int);
};

#endif
