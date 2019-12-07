#include"selectSorter.h"
#include<iostream>
#include<ctime>

void selectSorter::sortOperation(int* a, size_t n)
{
	std::cout << "开始选择排序" << std::endl;
	clock_t startTime = clock();
	assert(a);
	int begin = 0;
	int end = n - 1;
	while (begin < end)
	{
		int min = begin, max = begin;
		for (int i = begin; i <= end; ++i)
		{
			if (a[min] > a[i])
				min = i;
			if (a[max] < a[i])
				max = i;
		}
		int temp;
		//swap(a[min], a[begin]);
		temp = a[min];
		a[min] = a[begin];
		a[begin] = temp;
		if (max == begin)//如果首元素是最大的，则需要先把min 和 max的位置一换，再交换，否则经过两次交换，又回到原来的位置
			max = min;
		//swap(a[max], a[end]);
		temp = a[max];
		a[min] = a[end];
		a[end] = temp;
		begin++;
		end--;
	}
	clock_t endTime = clock();
	double time = static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC;
	std::cout << "选择排序结束,耗时" << time << "秒" << std::endl;
	//for (int i = 0; i < n; i++)
	//{
	//	std::cout << a[i] << std::endl;
	//}
}