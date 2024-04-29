// 백준 1546번
#include <stdio.h>

int main(void)
{
	int N;
	int arr[1000] = { 0, };
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	int max = arr[0];

	for (int i = 1; i < N; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	float result = 0;
	float sum = 0;

	for (int i = 0; i < N; i++)
	{
		result = (float) arr[i] / max * 100;
			sum += result;
	}

	printf("%f", sum / N);

	return 0;
}
