#include <stdio.h>
#include <string.h>



int main()
{
	char str[101];
	gets(str);
	int i = 0;

	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			str[i] = (str[i] - 'a' + 13) % 26 + 'a';
		}
		else if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] = (str[i] - 'A' + 13) % 26 + 'A';
		}
		i++;
	}

	printf("%s", str);


	return 0;
}
