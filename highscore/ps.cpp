#include "ps.h"

PS::PS() {
	_name = "nobody";
	_score = 0;
}

PS::~PS() {

}

void PS::setName(string name) {
	_name = name;
}
string PS::getName() {
	return _name;
}
void PS::setScore(int score) {
	_score = score;
}
int PS::getScore() {
	return _score;
}