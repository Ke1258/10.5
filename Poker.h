#ifndef POKER
#define POKER
#include<string>
#include<iostream>
using namespace std;
class Poker 
{
private:
    int poker[53];     //���J
    int pokerValue[53]; //���J�N���ƭ�
    string pokerName[53]; //���J�W
    int money;   //���a����  
    int bet;     //���a����`
public:
    Poker();
    void inputBet();            //���a��J��`
    void newGame();
    string getPokerF();  //�Φr�ꪺ�Φ���^���a���P
    string getPokerL();  //�Φr�ꪺ�Φ���^���a���P
    int getPorker();
    int getPorkerValue();
    string getPorkerName();
}

#endif
