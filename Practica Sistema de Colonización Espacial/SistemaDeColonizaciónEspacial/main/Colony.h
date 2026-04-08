#pragma once
#include <string>
#include "dome.h"
class Colony
{
private:

	std::string name;
	std::string planeta;
	dome** domes;
	int domecount;
	int domecap;

public:
	bool assignColonist(c : Colonist*);
	int evacuateDome(idx: int);
	bool transferColonist(id, srcldx, dstldx);
	int rebalance();
	Colonist* findColonist(id);
	void controlBoard() const;
	void oxygenAlert(threshold) const;
	void productivityReport() const;
	void globalStats() const;




};

