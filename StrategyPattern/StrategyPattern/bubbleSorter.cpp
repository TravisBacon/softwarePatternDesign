#include"bubbleSorter.h"
#include<iostream>
#include<ctime>

void bubbleSorter::sortOperation(int* a, size_t n)
{
	std::cout << "开始冒泡排序" << std::endl;
	clock_t startTime = clock();
	assert(a);
	size_t end = n;
	int exchange = 0;
	while (end > 0)//end作为每趟排序的终止条件
	{
		for (size_t i = 1; i < end; ++i)
		{
			if (a[i - 1] > a[i])
			{
				//swap(a[i - 1], a[i]);
				int temp;
				temp = a[i-1];
				a[i-1] = a[i];
				a[i] = temp;
				exchange = 1;
			}
		}
		if (0 == exchange)//数组本身为升序，如果一趟排序结束，并没有进行交换，那么直接跳出循环（减少循环次数，升高效率）
			break;
		--end;
	}
	clock_t endTime = clock();
	double time = static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC;
	std::cout << "冒泡排序结束,耗时" << time << "秒" << std::endl;
	//for (int i = 0; i < n; i++)
	//{
	//	std::cout << a[i] << std::endl;
	//}
}