#include "Poker.h"

Poker::Poker()
{
    money = 500;
    bet = 0;
    poker[0] = 0;
    for (int i = 1; i <= 13; i++)   
    {                         
        poker[i] = i;          
        poker[i + 13] = i;       
        poker[i + 26] = i;        
        poker[i + 39] = i;        
    }

    pokerValue[0] = 0;
    for (int i = 1; i <= 52; i++)
    {
        if (poker[i] <= 10)  pokerValue[i] = poker[i];
        else              pokerValue[i] = 10;
    }
    pokerName[0] = "";
    for (int i = 0; i < 4; i++)
    {
        pokerName[1 + 13 * i] = "A";
        pokerName[2 + 13 * i] = "2";
        pokerName[3 + 13 * i] = "3";
        pokerName[4 + 13 * i] = "4";
        pokerName[5 + 13 * i] = "5";
        pokerName[6 + 13 * i] = "6";
        pokerName[7 + 13 * i] = "7";
        pokerName[8 + 13 * i] = "8";
        pokerName[9 + 13 * i] = "9";
        pokerName[10 + 13 * i] = "10";
        pokerName[11 + 13 * i] = "J";
        pokerName[12 + 13 * i] = "Q";
        pokerName[13 + 13 * i] = "K";
    }
}

void Poker::inputBet()
{
}

void Poker::newGame()
{
}

int Poker::getPorker()
{
    return *poker;
}

int Poker::getPorkerValue()
{
    return *pokerValue;
}

string Poker::getPorkerName()
{
    return  *pokerName;
}
