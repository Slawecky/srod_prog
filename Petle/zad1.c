#include <stdio.h>
int main() {
  int y=1;
  printf("Kolejne potęgi liczby 2 nie większe niż 2050\n" );
  while (y<2050) {
    printf("%d\n", y);
    y*=2;
  }
}
