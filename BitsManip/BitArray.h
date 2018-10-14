#ifndef BIT_ARRAY
#define BIT_ARRAY


class BitArray {

protected:
	unsigned __int8	 * Data;
	unsigned __int8	 OctetNum;
	unsigned __int8 MAXOctets = 32;

public:

	BitArray(unsigned __int8);
	~BitArray();

	//setters
	void changeCapacity(unsigned __int8);
	void changeOctetCapacity(unsigned __int8);
	void ChangeElement(unsigned __int8, bool);
	void ChangeOctet(unsigned __int8, unsigned __int8);

	//getters
	unsigned __int8	 getCapacity();
	unsigned __int8	 getOctetNum();
	bool getElement(unsigned __int8);
	unsigned __int8	 GetOctetWithOctetInd(unsigned __int8);
	
};


#endif