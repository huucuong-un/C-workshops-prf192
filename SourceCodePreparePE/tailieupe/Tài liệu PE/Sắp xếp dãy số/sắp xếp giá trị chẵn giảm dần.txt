#include <stdio.h>

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void selectionSort (int arr[], int n)
{
	int i,j;
	int max;
	for(i = 0; i < n - 1;i++)
	{
		max = i;
		for(j = i + 1; j < n; j++ )
		{
			if(arr[j] > arr[max])
				max = j;
		}
		swap(&arr[i], &arr[max]);
	}
}

int main()
{
	int n;
	int arr[100];
	int i;
	scanf("%d", &n);
	for(i = 0; i < n;i++)
	{
		scanf("%d", &arr[i]);
	}
	selectionSort(arr, n);
	int count = 0;
	for(i = 0; i < n;i++)
	{
		if(arr[i] % 2 == 0)
			count++;
	}
	for(i = 0; i < n;i++)
	{
		if(arr[i] % 2 == 0 && count != 1)
		{
			printf("%d\n", arr[i]);
			count--;
		}
		else if(arr[i] % 2 == 0 && count == 1)
		{
			printf("%d", arr[i]);
		}
	}
}
