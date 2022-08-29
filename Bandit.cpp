#include "Bandit.h"

Bandit::Bandit() {}

void Bandit::MakeSpin()
{
	spin.drum1 = rand() % 7 + 1;
	spin.drum2 = rand() % 7 + 1;
	spin.drum3 = rand() % 7 + 1;
}