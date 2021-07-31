#include <iostream>

class TestItem {

private:
	int money;
	long id;

public:

	TestItem(long id) {
		this->id = id;
		this->money = 0;
	}

	
	void addMoney(int amount) {
		this->money += amount;
	}

	int getMoney() {
		return this->money;
	}

	void setID(long id) {
		this->id = id;
	}

	long getID() {
		return this->id;
	}

};

