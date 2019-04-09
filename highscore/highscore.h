#ifndef HIGHSCORE_H
#define HIGHSCORE_H
#include <iostream>

using namespace std;

class Highscore {
private:
	int size;
	int* score[];
public:
	Highscore();
	~Highscore();
};

#endif // HIGHSCORE_H