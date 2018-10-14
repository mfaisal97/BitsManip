#ifndef OCTET_SET
#define OCTET_SET

#include "BitArray.h"

class OctetSet
{
private:
	BitArray Data;

public:
	OctetSet(unsigned __int8);
	~OctetSet();

	void Insert(unsigned __int8 element);
	void Remove(unsigned __int8 element);
	bool Exist(unsigned __int8 element);
};
#endif