#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	char *arr;
}ch;

int compare(const ch* a, const ch* b)
{
	return strcmp(a->arr, b->arr);
}


int main()
{
	char str[1001];
	scanf("%s", str);
	ch S[1001];
	int size = strlen(str);

	for (int i = 0; i < size; i++)
	{
		S[i].arr = &str[i];
	}

	qsort(S, size, sizeof(ch), compare);

	for (int i = 0; i < size; i++)
	{
		printf("%s\n", S[i].arr);
	}
	


	return 0;
}
