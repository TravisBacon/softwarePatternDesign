#include"selectSorter.h"
#include<iostream>
#include<ctime>

void selectSorter::sortOperation(int* a, size_t n)
{
	std::cout << "��ʼѡ������" << std::endl;
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
		if (max == begin)//�����Ԫ�������ģ�����Ҫ�Ȱ�min �� max��λ��һ�����ٽ��������򾭹����ν������ֻص�ԭ����λ��
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
	std::cout << "ѡ���������,��ʱ" << time << "��" << std::endl;
	//for (int i = 0; i < n; i++)
	//{
	//	std::cout << a[i] << std::endl;
	//}
}