#include "Reservoir.h"
#include <iostream>
using namespace std;

Reservoir::Reservoir()
{
	name = type = nullptr;
	length = width = maxdeepth = 0;
}

Reservoir::Reservoir(const char* Name, const char* Type, double L, double W, double MD)
{
	name = new char[strlen(Name) + 1];
	strcpy_s(name, strlen(Name) + 1, Name);

	type = new char[strlen(Type) + 1];
	strcpy_s(type, strlen(Type) + 1, Type);

	length = L;
	width = W;
	maxdeepth = MD;
}

Reservoir::Reservoir(Reservoir& obj)
{
	this->name = new char[strlen(obj.name)];
	strcpy_s(this->name, strlen(obj.name), obj.name);

	this->type = new char[strlen(obj.type)];
	strcpy_s(this->type, strlen(obj.type), obj.type);

	this->length = obj.length;
	this->width = obj.width;
	this->maxdeepth = obj.maxdeepth;
}

Reservoir::~Reservoir()
{
	delete[] name;
	delete[] type;
}

bool Reservoir::Onetype(Reservoir& obj)
{
	if (this->type == obj.type)
	{
		return true;
	}
	return false;
}

void Reservoir::CompRes(Reservoir& obj)
{
	
	if (Onetype(obj))
	{
		if ((this->length * this->width) > (obj.length * obj.width))
		{
			cout << this->name << " bigger than " << obj.name<<endl;
		}
		else if ((this->length * this->width) < (obj.length * obj.width))
		{
			cout << obj.name << " bigger than " <<  this->name << endl;
		}
		else
		{
			cout << "equal"<<endl;
		}
	}
}


