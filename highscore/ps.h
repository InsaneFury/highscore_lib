#ifndef PS_H
#define PS_H
#include <iostream>

using namespace std;

class PS {
private:
	string _name;
	int _score;
public:
	PS();
	~PS();
	void setName(string name);
	string getName();
	void setScore(int score);
	int getScore();
};

#endif // PS_H
