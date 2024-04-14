// 백준 1758번
#include<stdio.h>
#include<stdlib.h>


int compare(const void* first, const void* second)
{
	if (*(int*)first > *(int*)second)
	{
		return -1;
	}
	else if (*(int*)first < *(int*)second)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
	
int main (void)
{
    int N;
	long long sum = 0;
	int arr[100000];
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	qsort(arr, N, sizeof(int), compare);
	
	for (int i = 0; i < N; i++)
	{
		if (arr[i] - i < 0)
		{
			break;
		}
		else
		{
			sum = sum + arr[i] - i;
		}
	}

	printf("%lld\n", sum);
	
	return 0;
	
}
