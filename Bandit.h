#ifndef __BANDIT_H__
#define __BANDIT_H__

#include "stdafx.h"
#include "Queue.h"

struct Drums
{
	int drum1;
	int drum2;
	int drum3;
};

class Bandit
{
	Drums spin;
	Queue queue;
public:
	Bandit();
	~Bandit();
	void MakeSpin();
};

#endif