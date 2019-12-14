#include <stdio.h>
#include "CircularQueueApi.h"
int pivotIndex(int *nums, int numSize);

int main()
{
	int a[10] = {1, 2, 3, 4, 3, 2, 1};
	int numSize = 7;
	int b;
#if 0
	/*左边的和的两倍加上数组中心索引的值等于数组的和*/
	b = pivotIndex(a, numSize);
	if (b != -1)
		printf("中心索引是 %d\n", b);
	else
		printf("数组中不存在中心索引\n");
#endif
}

int pivotIndex(int *nums, int numSize)
{
	int sum_of_array = 0;
	int sum_of_halfarray = 0;
	int i = 0;
	for (i = 0; i < numSize; i++)
	{
		sum_of_array += nums[i];
	}

	for (i = 0; i < numSize; i++)
	{
		sum_of_halfarray += nums[i];
		if ((sum_of_halfarray * 2 + nums[i + 1]) == sum_of_array)
			return i + 1;
	}
	return -1;
	
}