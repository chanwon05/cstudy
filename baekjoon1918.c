#include <stdio.h>
#include <string.h>



void push(char data, int *top, char stack[])
{
	stack[++(*top)] = data;
}

int empty( int *top)
{
	if (*top == -1)	
		return 1;	
	else
		return 0;
}

char pop(int *top, char stack[])
{
	return stack[(*top)--];
}

int precedence(char op)
{
	if (op == '+' || op == '-')
		return 1;
	if (op == '*' || op == '/')
		return 2;
	return 0;
}


int main()
{
	int top = -1;
	char stack[101];
	char str[101];
	scanf("%s", str);
	int size = strlen(str);
	int cnt = 0;

	for (int i = 0; i < size; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			printf("%c", str[i]);
		}
		else if (str[i] == '(')
		{
			push(str[i], &top, stack);
		}
		else if (str[i] == ')')
		{
			while (stack[top] != '(')
			{
				printf("%c", pop(&top, stack));
			}
			pop(&top, stack);
		}
		else
		{
			while (!empty(&top) && precedence(stack[top]) >= precedence(str[i]))
			{
				printf("%c", pop(&top, stack));
			}
			push(str[i], &top, stack);
		}
	}
	

	while (!empty(&top))
	{
		printf("%c", pop(&top, stack));
	}


	return 0;
}
