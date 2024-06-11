#pragma once
class Reservoir
{
	char* name;
	char* type;
	double length;
	double width;
	double maxdeepth;
public:
	Reservoir();
	Reservoir(const char* Name, const char* Type, double L, double W, double MD);
	Reservoir(Reservoir& obj);
	~Reservoir();
	bool Onetype(Reservoir& obj);
	void CompRes(Reservoir& obj);

	
};

