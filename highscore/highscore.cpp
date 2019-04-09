#include "highscore.h";

Highscore::Highscore(int size) {
	_size = size;
	_list = new PS[_size];
	_aux = _list;
}
Highscore::~Highscore() {
	if (_list != NULL) {
		delete[] _list;
	}
}
void Highscore::setSize(int size) {
	_size = size;
}
int Highscore::getSize() {
	return _size;
}
PS* Highscore::getList() {
	return _list;
}
bool Highscore::addPlayer(const string name, const int score) {
	for (int i = 0; i < _size; i++) {
		if (strcmp(_aux->getName().c_str(), "nobody")) {
			_aux->setName(name);
			_aux->setScore(score);
			_aux =_list;
			orderList();
			return true;
		}
		else {
			_aux++;
		}
	}
	return false;
}
int Highscore::getAmountOfScores() {
	int count = _size;
	for (int i = 0; i < _size; i++) {
		if (!(strcmp(_aux->getName().c_str(), "nobody"))) {
			count--;
		}
	}
	return count;
}
void Highscore::orderList() {
	int temp_score = 0;
	string temp_name = "";
	for (int i = 1; i < _size; i++) {
		for (int j = 0; j < _size - 1; j++) {
			if (_aux[j].getScore() > _aux[j + 1].getScore()) {
				//change score
				temp_score = _aux[j].getScore();
				_aux[j].setScore(_aux[j + 1].getScore());
				_aux[j + 1].setScore(temp_score);
				//change name
				strcpy(temp_name.c_str, _aux[j].getName().c_str);
				_aux[j].setName(_aux[j + 1].getName());
				_aux[j + 1].setName(temp_name);
			}
		}
	}
}