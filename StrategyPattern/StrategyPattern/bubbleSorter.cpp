#include"bubbleSorter.h"
#include<iostream>
#include<ctime>

void bubbleSorter::sortOperation(int* a, size_t n)
{
	std::cout << "��ʼð������" << std::endl;
	clock_t startTime = clock();
	assert(a);
	size_t end = n;
	int exchange = 0;
	while (end > 0)//end��Ϊÿ���������ֹ����
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
		if (0 == exchange)//���鱾��Ϊ�������һ�������������û�н��н�������ôֱ������ѭ��������ѭ������������Ч�ʣ�
			break;
		--end;
	}
	clock_t endTime = clock();
	double time = static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC;
	std::cout << "ð���������,��ʱ" << time << "��" << std::endl;
	//for (int i = 0; i < n; i++)
	//{
	//	std::cout << a[i] << std::endl;
	//}
}