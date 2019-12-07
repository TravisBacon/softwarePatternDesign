#include"shellSorter.h"
#include<iostream>
#include<ctime>

void shellSorter::sortOperation(int* a, size_t n)
{
	std::cout << "开始希尔排序" << std::endl;
	clock_t startTime = clock();
	assert(a);
	//1. gap > 1 预排序
	//2. gap == 1 直接插入排序
	//3. gap = gap/3 + 1; 保证最后一次排序是直接插入排序

	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		//单趟排序
		for (size_t i = 0; i < n - gap; ++i)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0 && a[end] > tmp)
			{
				a[end + gap] = a[end];
				end -= gap;
			}
			a[end + gap] = tmp;
		}
	}
	clock_t endTime = clock();
	double time = static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC;
	std::cout << "希尔排序结束,耗时" << time << "秒" << std::endl;
	//for (int i = 0; i < n; i++)
	//{
	//	std::cout << a[i] << std::endl;
	//}
}