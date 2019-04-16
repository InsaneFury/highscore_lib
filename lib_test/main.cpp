#include <iostream>
#include "highscore.h"

void main() {
	Highscore *h = new Highscore(4);

	h->addPlayer("Ivan", 8);
	for (int i = 0; i < h->getSize(); i++) {
		cout << endl;
		cout << h->getList()->getName().c_str() << " :: " << h->getList()->getScore();
	}
	
	delete h;
	cin.get();
}