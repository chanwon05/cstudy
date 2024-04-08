#include <stdio.h>
int main(void)
{
   int num = 0;
   scanf("%d", &num);
   int max, min;
   scanf("%d", &min);
   max = min;
   for (int i = 1; i < num; i++)
   {
      int num1;
      scanf("%d", &num1);
      if (num1 < min)
      {
         min = num1;
      }
      else if (num1 > max)
      {
         max = num1;
      }
   }
   printf("%d %d\n", min, max);
   

   return 0;
}
