// 백준 1546번
#include <stdio.h>
#include <math.h>

int main(void)
{
	int N, M;
	int score[1000] = { 0, };
	float sum = 0;
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &score[i]);
	}
	int max = score[0];
	for (int i = 1; i < N; i++)
	{
		if (max < score[i])
		{
			max = score[i];
		}
	}
	for (int i = 0; i < N; i++)
	{
		sum += (float) score[i] / max * 100;
	}

	printf("%f", sum/N);
	


	return 0;
}
