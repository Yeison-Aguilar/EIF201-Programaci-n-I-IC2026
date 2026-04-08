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




};

