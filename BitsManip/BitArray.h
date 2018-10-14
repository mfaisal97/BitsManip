#ifndef BIT_ARRAY
#define BIT_ARRAY

class BitArray {

protected:
	unsigned __int8	 * Data;
	unsigned __int8	 OctetNum;
	const unsigned __int8 MAXOctets;

public:

	BitArray(int);
	~BitArray();

	//setters
	void changeCapacity(int);
	void changeOctetCapacity(unsigned __int8);
	void ChangeElement(unsigned __int8, bool);
	void ChangeOctet(unsigned __int8, unsigned __int8);

	//getters
	int	 getCapacity();
	unsigned __int8	 getOctetNum();
	bool getElement(unsigned __int8);
	unsigned __int8	 GetOctetWithOctetInd(unsigned __int8);
	
};


#endif