#ifndef WONANDLOSE
#define	WONANDLOSE
#include "Poker.h"
#include"Deal.h"
#include<iostream>
using namespace std;
class WonAndLose :public Deal 
{

public:
	void landlordProcess();        //在玩家不要牌時進行處理
	void farmerAsk();
	void landlordAsk();
	double getSumF();       //返回玩家牌的點數，用以判斷是否超過10.5點
	double getSumL();     //返回莊家牌的點數
};
#endif // !1
