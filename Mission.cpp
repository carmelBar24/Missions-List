#include "pch.h"
#include "Mission.h"
int Mission::missionID = 0;
Mission::Mission(CString t, int type) {
	this->_text = t;
	this->_type = type;
	++missionID;
}

void Mission::setType(int type) {
	this->_type = type;
}