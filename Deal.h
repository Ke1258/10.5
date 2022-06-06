
#ifndef DEAL
#define	DEAL
#include<string>
#include"Poker.h"
#include<iostream>
#include<iomanip>
using namespace std;
static int NUM=1000;
static int randNum[1000];
static int j=2;
class Deal :public Poker
{
private:
	
	double pokerF[5];   //玩家手中的牌 
	double pokerL[5];   //莊家手中的牌 
	int pokerNumF;   //玩家手中的牌數
	int pokerNumL;   //莊家手中的牌數
public:
	
	Deal();
	string getPokerF();  //用字串的形式返回玩家的牌
	string getPokerL();  //用字串的形式返回莊家的牌
	double getPokeriF(int);
	double getPokeriL(int);
	int getpokerNumF();  
	int getpokerNumL();
	void setPokerF(int, double);
	void setPokerL(int, double);
	void setpokerNumF(int);
	void setpokerNumL(int);
	void dealF();
	void dealL();
	void initPoker();  //洗牌,在每輪遊戲開始前進行
	void newGame();            //開始新遊戲
	

};
#endif // !1

