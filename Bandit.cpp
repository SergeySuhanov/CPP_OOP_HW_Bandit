#include "Bandit.h"

Bandit::Bandit() spin.drum1(1) {}

void Bandit::MakeSpin()
{
	spin.drum1 = rand() % 7 + 1;
	spin.drum2 = rand() % 7 + 1;
	spin.drum3 = rand() % 7 + 1;

	if (queue.IsFull())
		queue.Extract();
	queue.Add(spin);
	queue.PrintLast();
}