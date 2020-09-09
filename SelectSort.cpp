#include<stdio.h>

void SelectSort(int *a, int n)
{
	int i, j;
	int tmp, min;
	for(i=0; i<n-1; i++)
	{
		min = i;
		for(j=i+1; j<n; j++)
		{
			if(a[min] > a[j])
			{
				min = j;
			}
		}
		if(min != i)
		{
			tmp = a[min];
			a[min] = a[i];
			a[i] = tmp;
		}
	}
}

int main()
{
	int i;
	int a[7] = {5,2,10,8,6,4,7};
	SelectSort(a, 7);
	for(i=0; i<7; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
