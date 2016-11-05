/* Napisać program obliczający silnię z podanej, niezbyt dużej, liczby naturalnej.
SIlnia (0) = 1 z definicji
SIlnia (1) = 1
SIlnia (2) = 1*2=2
SIlnia (3) = 1*2*3=6
SIlnia (4) = 1*2*3*4=24 */
#include <stdio.h>

int silnia(int i)
{
  //Exit 136
  int s=1;
  for(int n = 1; n<=i; n++)
  {
    s= s * n;
  }
  return s;
}

int main()
{
  int i = 4;
  printf("Silnia(4) = %d\n", silnia(4));
  printf("Silnia(3) = %d\n", silnia(3));
  printf("Silnia(2) = %d\n", silnia(2));
  printf("Silnia(1) = %d\n", silnia(1));
  printf("Silnia(0) = %d\n", silnia(0));
  printf("Silnia(2.5) = %d\n", silnia(2.5));
  printf("Silnia(-4) = %d\n", silnia(-4));

  printf("Silnia z %d = %d\n", i, silnia(i));
  return 0;
}
