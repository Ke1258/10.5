#ifndef WONANDLOSE
#define	WONANDLOSE
#include "Poker.h"
#include"Deal.h"
#include<iostream>
using namespace std;
class WonAndLose :public Deal 
{

public:
	void landlordProcess();        //�b���a���n�P�ɶi��B�z
	void farmerAsk();
	void landlordAsk();
	double getSumF();       //��^���a�P���I�ơA�ΥH�P�_�O�_�W�L10.5�I
	double getSumL();     //��^���a�P���I��
};
#endif // !1
