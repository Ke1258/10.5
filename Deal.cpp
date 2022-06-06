#include"Deal.h"

Deal::Deal()
{
    for (int i = 0; i < 5; i++)
    {
        pokerF[i] = 0;    //|對pokerOfFarmer初始化
        pokerL[i] = 0;    //|對pokerOfLandlord初始化
    }
    pokerNumF = 0;//玩家手中的牌數初始化為0
    pokerNumL = 0;//莊家手中的牌數初始化為0
     ;
    srand((int)time(0));
    for (int i = 0; i < NUM; i++)
    {
        randNum[i] = rand() * 51 / 32767 + 1;//產生隨機數陣列
    }
}

void Deal::initPoker()
{
    cout << "新一局遊戲開始，開始洗牌>>>>>" << endl;

    pokerF[0] = randNum[j++];  //产生1-52的随机数
    pokerL[0] = randNum[j++];  //产生1-52的随机数

    pokerNumF = 1;
    pokerNumL = 1;

    cout << "洗牌完成,你的牌為:" << getPokerF() << endl;
}

string Deal::getPokerF()
{
    string result="";
    cout << fixed << setprecision(1);
    for (int i = 0; i <pokerNumF; i++)
        result = result + getPorkerName(pokerF[i]) + " ";

    return result;
}

string Deal::getPokerL()
{
    
    string result = "";

    for (int i = 0; i < pokerNumL; i++)
        result = result + getPorkerName(pokerL[i]) + " ";

    return result;
}

double Deal::getPokeriF(int i)
{
    return pokerF[i];
}
double Deal::getPokeriL(int i)
{
    return pokerL[i];
}

int Deal::getpokerNumF()
{
    return pokerNumF;
    
}

int Deal::getpokerNumL()
{
    return pokerNumL;
}
void Deal::setPokerF(int s, double f)
{
    pokerF[s] = f;
}
void Deal::setPokerL(int s, double l)
{
    pokerL[s] = l;
}
void Deal::setpokerNumF(int f)
{
    pokerNumF = f;
}
void Deal::setpokerNumL(int l)
{
    pokerNumL = l;
}
void Deal::dealF()
{
    pokerF[pokerNumF] = randNum[j++];
    setpokerNumF(pokerNumF +1);
}
void Deal::dealL()
{
    pokerL[pokerNumF] = randNum[j++];
    setpokerNumL(pokerNumF + 1);
}
void Deal::newGame()
{
    inputBet();
    initPoker();
    cout << "你得到的牌為:" << getPokerF() << endl;
}


