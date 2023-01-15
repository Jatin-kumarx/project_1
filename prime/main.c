#include <stdio.h>
int main ()
{
  int num;
  int count = 0;
  printf ("enter the number : ");
  scanf ("%d", &num);
  for (int i = 2; i < num; i++)
    {
      if (num % i == 0)
	count++;
    }
  if (count == 0)
    printf ("the number is prime");
  else
    printf ("the number is not prime");
  return 0;
}

