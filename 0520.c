#include <stdio.h>

int main(void) 
{
	char S[100];
	int result[26] = { 0, };
	scanf("%s", S);

	for (int i = 0; i < 26; i++)
		result[i] = -1;



	for (char i = 'a'; i <= 'z'; i++)
	{
		for (int j = 0; S[j] != '\0'; j++)
		{

			if (S[j] == i)
			{
				result[S[j] - 'a'] = j;
				break;
			}

		}
	}



	for (int i = 0; i < 26; i++) 
	{
		printf("%d ", result[i]);

	}
	


	return 0;
}
