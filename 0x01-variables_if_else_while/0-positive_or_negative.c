#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main-Print if the number is positive,negative or 0 
 *Return: Always 0 (success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
printf("%d is 0\n", n);
}
else
{
printf("%d is negative\n", n);
}
Return (0);
}
