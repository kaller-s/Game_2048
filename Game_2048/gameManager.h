#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>  
#include <getopt.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
#include <iomanip>
#include <vector>
#include "player.h"
#define UP 'w'
#define DOWN 'z'
#define LEFT 'a'
#define RIGHT 's'

using namespace std;

//????????????
class GameManager {
public:
	//????????????
	GameManager(int argc, char *const argv[]);   

	//??????????????????
	void modeChoosing(); 
	
	//????????????????????????
	int modeGet();

	//???????????????????????????
	void gameExecute();	

	//???????????????????????????
	void gameExecute(int num);

	//????????????
	void printMap(); 

	//???????????????
	void gameInit();

	//??????????????????
	int impleMap(char ch, int sign = 0);

	//?????????????????????
	void directionJudge(int rowL, int colL, int& x, int& y, int& next, char ch);

	//??????????????????????????????
	char directionOnly();

	//????????????
	void fillMap();

	//????????????????????????
	bool isFull();

	//??????????????????????????????
	bool isWin();

	//????????????????????????
	void resultJudge(Player* players, int num);

private:
	//??????
	vector <vector <int>> map;
	//????????????
	int size;
	//????????????
	int m_diffy[2];
	//??????????????????
	int m_dSign;
	//??????????????????
	int m_modeNum;
	//????????????
	int m_score;
	//???????????????????????????
	bool m_isChange;
	//????????????
	bool endSign;
	//????????????
	int cheatnum;
	//????????????
	string command;
};

