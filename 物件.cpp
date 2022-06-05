#include <iostream>
#include<time.h>
using namespace std;

#define NUM 1000
int j = 2;//�w�q��������ܼ�
int randNum[NUM];

class Poker
{
private:

    int poker[53];     //���J
    int pokerValue[53]; //���J�N���ƭ�
    string pokerName[53]; //���J�W

    int pokerF[5];   //���a�⤤���P F:Farmer   L:Landlord
    int pokerL[5];   //���a�⤤���P F:Farmer   L:Landlord
    int pokerNumF;   //���a�⤤���P��
    int pokerNumL;   //���a�⤤���P��
public:
    Poker();           //�غc�禡�A��P��l��
    void initPoker();  //�~�P,�b�C���C���}�l�e�i��
    string getPokerF();  //�Φr�ꪺ�Φ���^���a���P
    string getPokerL();  //�Φr�ꪺ�Φ���^���a���P
    void newGame();            //�}�l�s�C��
}
Poker::Poker()
{

    poker[0] = 0;
    for (int i = 1; i <= 13; i++)    //|
    {                         //|
        poker[i] = i;           //|�Ϋغc�禡��P��l��
        poker[i + 13] = i;        //|
        poker[i + 26] = i;        //|
        poker[i + 39] = i;        //|
    }//for����

    pokerValue[0] = 0;
    for (int i = 1; i <= 52; i++)
    {
        if (poker[i] <= 10)  pokerValue[i] = poker[i];
        else              pokerValue[i] = 10;
    }//for����


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
    }//for����

 

    for (int i = 0; i < 5; i++)
    {
        pokerF[i] = 0;    //|��pokerOfFarmer��l��
        pokerL[i] = 0;    //|��pokerOfLandlord��l��
    }


    pokerNumF = 0;//���a�⤤���P�ƪ�l�Ƭ�0
    pokerNumL = 0;//���a�⤤���P�ƪ�l�Ƭ�0

    srand((int)time(0));
    for (int i = 0; i < NUM; i++)
    {
        randNum[i] = rand() * 51 / 32767 + 1;//�����H���ư}�C
    }

}//�غc�禡Poker()����
void Poker::initPoker()
{
    cout << "�s�@���C���}�l�A�}�l�~�P>>>>>" << endl;

    pokerF[0] = randNum[j++];  //����1-52���H����
    pokerF[1] = randNum[j++];  //����1-52���H����
    pokerL[0] = randNum[j++];  //����1-52���H����
    pokerL[1] = randNum[j++];  //����1-52���H����

    pokerNumF = 2;
    pokerNumL = 2;

    cout << "�~�P����,�A���P��:" << getPokerF() << endl;
}//void Poker::initPoker()����

string Poker::getPokerF()//�Φr�ꪺ�Φ���^���a���P
{
    int i;
    string result = "";

    for (i = 0; i < pokerNumF; i++)
        result = result + pokerName[pokerF[i]] + " ";

    return result;
}//string Poker::getPokerF()����
string Poker::getPokerL()//�Φr�ꪺ�Φ���^���a���P
{
    int i;
    string result = "";

    for (i = 0; i < pokerNumL; i++)
        result = result + pokerName[pokerL[i]] + " ";

    return result;
}//string Poker::getPokerL()����
int main()
{
    int choose = 1;
    Poker poker;
    cout << "****************** �w�缾�G�Q�@�I�C�� ******************" << endl << endl;
    poker.initPoker();                   //�~�P
}
