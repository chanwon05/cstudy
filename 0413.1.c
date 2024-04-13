#include<stdio.h>

int main(void)
{
	int H, M;
	scanf("%d %d", &H, &M);
	
	if (M < 45)
	{
		H--;
		M = M - 45 + 60;
		if (H < 0)
		{
			H += 24;
		}
	}
	else if (M >= 45)
	{
		M -= 45;
	}

	printf("%d %d",H,M);
		

    return 0;
}
