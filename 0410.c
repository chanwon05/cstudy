#include<stdio.h>

int main(void)
{
	int test, sum, count;
	char arr[80];
	scanf("%d", &test);
	
	for (int i = 0; i < test; i++)
	{
		sum = 0; 
		count = 1;
		scanf("%s", &arr);
		for (int j = 0; arr[j] !='\0'; j++)
		{
			if (arr[j] == 'O')
			{
				sum += count;
				count++;		
			}
			else 
			{
				count = 1;
			}
		}
		printf("%d\n", sum);
	}
	
		
	
	return 0;
}
