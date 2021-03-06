#include "WonAndLose.h"

double WonAndLose::getSumF()
{
    
    double result = 0;

    for (int i = 0; i < getpokerNumF(); i++)
       
            result = result + getPorkerValue(getPokeriF(i));
       
   
    return result;
}

double WonAndLose::getSumL()
{

    double result = 0;

    for (int i = 0; i < getpokerNumL(); i++) {

        result = result + getPorkerValue(getPokeriL(i));

    }
    return result;
}

void WonAndLose::farmerAsk()
{
    if (getpokerNumF() == 5 || getSumF() == 10.5)
    {
        cout << "你贏了 double:"<< getbet() * 2 << endl;
        setmoney(getmoney() + getbet()*2);
        inputBet();
        initPoker();
    }
    else {
        dealF();
        cout << "你的牌" << getPokerF() << endl;
        if (getSumF() > 10.5)
        {
        cout << "你輸了" << getbet() << "元" << endl;

        setmoney(getmoney() - getbet());

        if (getmoney() <= 0)
        {
            cout << "你結束了" << endl;

            exit(0);
        }
        inputBet();
        initPoker();
        }
    }
 }


void WonAndLose::landlordAsk()
{
   
    if (getpokerNumL() >= 5)
    {
        if (getSumF() > getSumL())
        {
            cout << "你的牌" << getPokerL() << endl;
            cout << "你贏了,你贏了" << getbet() << "元" << endl;
            
            setmoney(getmoney() + getbet());
            inputBet();
            initPoker();
        }
        else if (getSumF() == getSumL())
        {
            cout << "莊家的牌為" << getPokerL() << endl;
           ;
            cout << "平手" << endl;
            inputBet();
            initPoker();
        }
        else if (getSumF() < getSumL())
        {
            cout << "莊家的牌為" << getPokerL() << endl;
            cout << "你輸了,你輸了" << Poker::getbet() << "元" << endl;
          
            setmoney(getmoney() -getbet());
            if (getmoney() <= 0)
            {
                cout << "你已經輸光了，哈哈" << endl;
                cout << "遊戲結束" << endl;
                exit(0);
            }
            inputBet();
            initPoker();
        }

    }
    else
    {
        dealL();//產生1-52的隨機數
        if (getSumL() > 10.5)
        {
            cout << "莊家的牌為" << getPokerL() << endl;
            cout << "莊家撐死了,你贏了" << getbet() << "元" << endl;
            setmoney(getmoney() + getbet());
            inputBet();
            initPoker();
        }
        else    landlordProcess();
    }
}
void WonAndLose::landlordProcess()
{   
    if (getpokerNumF() == 5 || getSumF() == 10.5)
    {
        cout << "你贏了" << getbet() * 2 << endl;
        setmoney(getmoney() + getbet() * 2);
        inputBet();
        initPoker();
    }
 
    else if (getSumL() >= 7)
    {
        if (getSumL() > getSumF())
        {
            cout << "莊家的牌為" << getPokerL() << endl;
            cout << "莊家獲勝，你輸了" << getbet() << "元" << endl;
            setmoney(getmoney() - getbet());
            if (getmoney() <= 0)
            {
                cout << "你已經輸光了，哈哈" << endl;
                cout << "遊戲結束" << endl;
                exit(0);
            }
            inputBet();
            initPoker();
        }
        else if (getSumF() == getSumL())
        {
            cout << "莊家的牌為" << getPokerL() << endl;
            cout << "本次遊戲平手" << endl;
            inputBet();
            initPoker();
        }
        else
        {
            cout << "莊家的牌為" << getPokerL() << endl;
            cout << "你贏了,你贏了" << Poker::getbet() << "元" << endl;
            setmoney(getmoney()+getbet());
            inputBet();
            initPoker();
        }
    }
    else
    {
        landlordAsk();
    }
}

