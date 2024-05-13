#include <stdio.h>

int combination(int, int);


int main(void)
{
    int T, N, M;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &N, &M);
        printf("%d\n", combination(M, N));
    }

    return 0;
}

int combination(int n, int r)
{
    int result = 1;

    if (r > n - r)
    {
        r = n - r;
    }

    for (int i = 0; i < r; i++)
    {
        result *= (n - i);
        result /= (i + 1);
    }

    return result;
    
}
