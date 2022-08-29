#include "stdafx.h"
#include "Queue.h"


int main()
{
	srand(time(0));
	Bandit bandit;
	Queue queue(30);

	bandit.MakeSpin();

	if (queue.IsFull())
		queue.Extract();
	queue.Add(bandit.spin);
	queue.PrintLast();

	return 0;
}