#pragma once
class dome
{
private:

	std::string code;
	DomeType type;
	double oxygenCap;
	int maxOccupants;
	bool sealed;
	Colonist** colonists;


public:

	dome(code, type, o2cpa, maxocc);
	dome(const dome&)
		operator=(const dome&);
		bool admitColonist(Colonist* c);
	Colonist* removeColonist(id)

	bool admitColonist(c : Colonist**);
	Colonist* removeColonist(id) Colonist*;
	Colonist** forceEvacuate() const;
	seal();
	double oxygenRatio();
	double totalConsumption();
	bool isFull() const;
	bool isCompatible(sp) const;
	void getStatus() const;

	


	~dome()
};

