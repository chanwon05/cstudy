#include <stdio.h>
#include <string.h>


int main(void)
{
	char word[1000000] = { 0, };
	scanf("%s", word);
	int count[26] = { 0, };
	
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

	char n;
	int max = 0;

	for (int i = 0; i < 26; i++)
	{
		if (count[i] > max)
		{
			max = count[i];
			n = 65 + i;
		}
		else if (count[i] == max)
		{
			n = 63;
		}
	}

	

	printf("%c", n);



	return 0;
}
