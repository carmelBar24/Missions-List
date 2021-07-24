#pragma once
#include "General.h"
#include "ToBuy.h"
#include "ToDay.h"
#include "ToDo.h"
#define ROWS 3
#define COLS 5
class Manager {
private:
	Mission* mArray[ROWS][COLS] = { NULL };
	int size[ROWS] = { 0 }; //current amount of missions
	//0 - buy
	//1 - day
	//2 - general
public:
	~Manager();
	CString getText(int i, int j) const { return this->mArray[i][j]->getText(); }
	double getPrice(int i, int j) const { return static_cast<ToBuy*>(this->mArray[i][j])->getPrice(); }
	int getPrio(int i, int j) const { return static_cast<ToDay*>(this->mArray[i][j])->getPriority(); }
	int getSize(int i) const { return this->size[i]; }
	Mission* getMission(int i, int j) const { return this->mArray[i][j]; }
	bool isFull(int i) const { return this->size[i] == COLS; }
	void sortByName();
	void sortByPrice();
	void sortByPriority();
	int getFreeSlot(int i) { return this->size[i]; }
	//void sortByDateLimit();

	void insert(Mission* m);
	void deleteMission(int i, int j);
};