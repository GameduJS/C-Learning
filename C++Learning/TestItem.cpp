#include <iostream>

class TestItem {

	

public:

	TestItem(long id) {
		this->id = id;
		this->money = 0;
	}

	int money;
	long id;
	
	void addMoney(int amount) {
		this->money += amount;
	}

	int getMoney() {
		return money;
	}

	void setID(long id) {
		this->id = id;
	}

	long getID() {
		return id;
	}

};

