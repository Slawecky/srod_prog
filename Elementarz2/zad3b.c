#include <stdio.h>

int main() {
  double pi = 4;
  int x;
  double dziel = 3;
  int znak = 1;

  printf("Podaj liczbę naturalną : ");
  scanf("%d\n", &x );

  for(int i = 0; i < x; i++, dziel += 2) {
    if (znak==1) {
      znak = -1;
    }  else  {
      znak = 1;
    }
    pi += znak * (4 / dziel);
  }
  printf("%f\n", pi);
  return 0;
}
