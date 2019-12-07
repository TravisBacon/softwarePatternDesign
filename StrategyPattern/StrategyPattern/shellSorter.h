#pragma once
#include"sortStrategy.h"
#include <assert.h>

class shellSorter : public sortStrategy
{
public:
	void sortOperation(int* a, size_t n);
};