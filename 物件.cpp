#include <iostream>
#include<time.h>
using namespace std;

#define NUM 1000
int j = 2;//定義為全域性變數
int randNum[NUM];

class Poker
{
private:

    int poker[53];     //撲克
    int pokerValue[53]; //撲克代表的數值
    string pokerName[53]; //撲克名

    int pokerF[5];   //玩家手中的牌 F:Farmer   L:Landlord
    int pokerL[5];   //莊家手中的牌 F:Farmer   L:Landlord
    int pokerNumF;   //玩家手中的牌數
    int pokerNumL;   //莊家手中的牌數
public:
    Poker();           //建構函式，對牌初始化
    void initPoker();  //洗牌,在每輪遊戲開始前進行
    string getPokerF();  //用字串的形式返回玩家的牌
    string getPokerL();  //用字串的形式返回莊家的牌
    void newGame();            //開始新遊戲
}
Poker::Poker()
{

    poker[0] = 0;
    for (int i = 1; i <= 13; i++)    //|
    {                         //|
        poker[i] = i;           //|用建構函式對牌初始化
        poker[i + 13] = i;        //|
        poker[i + 26] = i;        //|
        poker[i + 39] = i;        //|
    }//for結束

    pokerValue[0] = 0;
    for (int i = 1; i <= 52; i++)
    {
        if (poker[i] <= 10)  pokerValue[i] = poker[i];
        else              pokerValue[i] = 10;
    }//for結束


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
    }//for結束

 

    for (int i = 0; i < 5; i++)
    {
        pokerF[i] = 0;    //|對pokerOfFarmer初始化
        pokerL[i] = 0;    //|對pokerOfLandlord初始化
    }


    pokerNumF = 0;//玩家手中的牌數初始化為0
    pokerNumL = 0;//莊家手中的牌數初始化為0

    srand((int)time(0));
    for (int i = 0; i < NUM; i++)
    {
        randNum[i] = rand() * 51 / 32767 + 1;//產生隨機數陣列
    }

}//建構函式Poker()結束
void Poker::initPoker()
{
    cout << "新一局遊戲開始，開始洗牌>>>>>" << endl;

    pokerF[0] = randNum[j++];  //產生1-52的隨機數
    pokerF[1] = randNum[j++];  //產生1-52的隨機數
    pokerL[0] = randNum[j++];  //產生1-52的隨機數
    pokerL[1] = randNum[j++];  //產生1-52的隨機數

    pokerNumF = 2;
    pokerNumL = 2;

    cout << "洗牌完成,你的牌為:" << getPokerF() << endl;
}//void Poker::initPoker()結束

string Poker::getPokerF()//用字串的形式返回玩家的牌
{
    int i;
    string result = "";

    for (i = 0; i < pokerNumF; i++)
        result = result + pokerName[pokerF[i]] + " ";

    return result;
}//string Poker::getPokerF()結束
string Poker::getPokerL()//用字串的形式返回莊家的牌
{
    int i;
    string result = "";

    for (i = 0; i < pokerNumL; i++)
        result = result + pokerName[pokerL[i]] + " ";

    return result;
}//string Poker::getPokerL()結束
int main()
{
    int choose = 1;
    Poker poker;
    cout << "****************** 歡迎玩二十一點遊戲 ******************" << endl << endl;
    poker.initPoker();                   //洗牌
}
