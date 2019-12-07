#pragma once
#include"sortStrategy.h"

class context
{
public:
	context(sortStrategy* strategy)
	{
		this->strategy = strategy;
	}

	void setContext(sortStrategy* strategy)
	{
		this->strategy = strategy;
	}

	void doSort(int* a, size_t n)
	{
		strategy->sortOperation(a, n);
	}
private:
	sortStrategy* strategy;
};