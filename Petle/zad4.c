#include <stdio.h>
#include <stdlib.h>
int sumowanie(int d) {
  int s=0;
    if (d < 1){
      printf("Błąd, podałeś liczbę mniejszą niż 1\n ");
      exit(1);

    } else {
      for (int p = 0; p <= d; p++)
      s+=p;
    }
    return s;
}

int main() {
  int d;
  printf("Wpisz liczbę większą od 1: ");
    scanf("%d", &d);
  printf("%d\n", sumowanie(d));
}
