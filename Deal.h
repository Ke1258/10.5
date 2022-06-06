
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
	
	double pokerF[5];   //���a�⤤���P 
	double pokerL[5];   //���a�⤤���P 
	int pokerNumF;   //���a�⤤���P��
	int pokerNumL;   //���a�⤤���P��
public:
	
	Deal();
	string getPokerF();  //�Φr�ꪺ�Φ���^���a���P
	string getPokerL();  //�Φr�ꪺ�Φ���^���a���P
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
	void initPoker();  //�~�P,�b�C���C���}�l�e�i��
	void newGame();            //�}�l�s�C��
	

};
#endif // !1

