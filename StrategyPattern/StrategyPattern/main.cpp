#include<iostream>
#include"selectSorter.h"
#include"shellSorter.h"
#include"bubbleSorter.h"
#include"context.h"
#include<ctime>
#include<cstdlib>

int main()
{
	selectSorter* my_selectSorter = new selectSorter();
	shellSorter* my_shellSorter = new shellSorter();
	bubbleSorter* my_bubbleSorter = new bubbleSorter();

	const int N = 50000;
	int* a = new int[N];
	int* sample_1 = new int[N];
	int* sample_2 = new int[N];
	int* sample_3 = new int[N];

	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		a[i] = rand() % 100;
	}
	for (int i = 0; i < N; i++)
	{
		sample_1[i] = a[i];
		sample_2[i] = a[i];
		sample_3[i] = a[i];
	}

	context* sorter =new context(my_selectSorter);
	sorter->doSort(sample_1, N);
	sorter->setContext(my_shellSorter);
	sorter->doSort(sample_2, N);
	sorter->setContext(my_bubbleSorter);
	sorter->doSort(sample_3, N);

	delete my_bubbleSorter;
	delete my_selectSorter;
	delete my_shellSorter;
	delete sorter;
	delete []a;
	delete[] sample_1;
	delete[] sample_2;
	delete[] sample_3;
	system("pause");
}