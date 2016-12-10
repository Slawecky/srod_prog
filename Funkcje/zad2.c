#include <stdio.h>
#include <stdlib.h>

int silnia(int a) {
  int s = 1;
  if(a < 1) {
    printf("Błąd silnia jest zdefiniowana dla liczb nieujemnych podano %d\n", a);
    return 0;
  } else {
    for(int n = 2;n <= a; n++) {
      s = s * n;
    }
    return s;
  }
}
int main() {
  for(int n = 1; n <= 10; n++) {
    printf("%d\n ", silnia(n));
  }
  printf("\n");
}
