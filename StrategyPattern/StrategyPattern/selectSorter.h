#pragma once
#include"sortStrategy.h"
#include <assert.h>

class selectSorter : public sortStrategy
{
public:
	void sortOperation(int* a, size_t n);
};