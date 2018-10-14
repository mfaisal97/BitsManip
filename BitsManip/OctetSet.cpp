#include "pch.h"

OctetSet::OctetSet(unsigned __int8 size = 1):Data(size)
{
}

OctetSet::~OctetSet()
{
}

void OctetSet::Insert(unsigned __int8 element)
{
	while (Data.getCapacity() < element) {
		Data.changeOctetCapacity(2 * Data.getOctetNum());
	}
	Data.ChangeElement(element, true);
}

void OctetSet::Remove(unsigned __int8 element)
{
	if (Data.getCapacity() >= element)
		Data.ChangeElement(element, false);
}

bool OctetSet::Exist(unsigned __int8 element)
{
	if (Data.getCapacity() < element)
		return false;
	else
		return Data.getElement(element);
}
