#include <stdio.h>
#include <string.h>


int main(void)
{
	char word[1000000] = { 0, };
	scanf("%s", word);
	int count[26] = { 0, };
	char alpha[26] = { 'A','B','C','D', 'E','F','G','H',
		'I','J','K','L','M','N','O','P','Q','R','S','T', 'U','V','W','X','Y','Z' };
	
	for (char i = 'a'; i <= 'z'; i++)
	{
		for (int j = 0; j < strlen(word); j++)
		{
			if (word[j] == i)
			{
				count[word[j] - 'a'] += 1;
			}
		}
	}

	for (char i = 'A'; i <= 'Z'; i++)
	{
		for (int j = 0; j < strlen(word); j++)
		{
			if (word[j] == i)
			{
				count[word[j] - 'A'] += 1;
			}
		}
	}

	int n;
	int max = 0;

	for (int i = 0; i < 26; i++)
	{
		if (count[i] > max)
		{
			max = count[i];
			n = i;
		}
	}
	
	int sum = 0;

	for (int i = 0; i < 26; i++)
	{
		if (max == count[i])
		{
			sum++;
		}
	}

	if (sum >= 2)
	{
		printf("?");

		return 0;
	}


	printf("%c", alpha[n]);



	return 0;
}
