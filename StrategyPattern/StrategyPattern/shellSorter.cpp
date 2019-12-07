#include"shellSorter.h"
#include<iostream>
#include<ctime>

void shellSorter::sortOperation(int* a, size_t n)
{
	std::cout << "��ʼϣ������" << std::endl;
	clock_t startTime = clock();
	assert(a);
	//1. gap > 1 Ԥ����
	//2. gap == 1 ֱ�Ӳ�������
	//3. gap = gap/3 + 1; ��֤���һ��������ֱ�Ӳ�������

	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		//��������
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
	std::cout << "ϣ���������,��ʱ" << time << "��" << std::endl;
	//for (int i = 0; i < n; i++)
	//{
	//	std::cout << a[i] << std::endl;
	//}
}