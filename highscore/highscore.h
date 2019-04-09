#ifndef HIGHSCORE_H
#define HIGHSCORE_H
#include <iostream>
#include "ps.h"

using namespace std;

class Highscore {
private:
	int _size;
	PS* _list;
	PS*_aux;
	void orderList();
public:
	Highscore(int size);
	~Highscore();
	void setSize(int size);
	int getSize();
	bool addPlayer(const string name, const int score);
	PS* getList();
	int getAmountOfScores();
};

#endif // HIGHSCORE_H