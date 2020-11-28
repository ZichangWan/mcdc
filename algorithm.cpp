#include"algorithm.h"

int binary_search(float v, float vec[])
{
	int left   = 0;
	int right  = sizeof(vec) - 1;
	int mid    = -1;

	while (left <= right)
	{
		mid = (int) (left + right) / 2;
		if (vec[mid] < v )
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	
	return right;
}



float interpolate(float x,float x1, float x2, float y1, float y2)
{
	float resultint = (x - x2) / (x1 - x2) * y1 + (x - x1) / (x2 - x1) * y2;

	return resultint;
}
