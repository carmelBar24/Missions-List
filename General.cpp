#include "pch.h"
#include "General.h"
CString General::getInfo() const {
	CString res;
	res.AppendFormat(L"*****************************\r\n");
	res.AppendFormat(L"Mission description: ");
	res.Append(this->getText());
	res.AppendFormat(L"\r\nDate limit: %lf$\r\n", this->getDateLim());
	res.AppendFormat(L"*****************************\r\n");
	return res;
}