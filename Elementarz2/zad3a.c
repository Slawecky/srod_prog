#include <stdio.h>

// π ≈ 3,14159 26535 89793 23846

double leibniz(int n) {
  double pi = 4;
  double dziel = 3;
  int znak = 1;

  for(int i = 0; i < n; i++, dziel += 2) {
    if (znak == 1) {
      znak = -1;
    }  else  {
      znak = 1;
    }
    pi += znak * (4 / dziel);
  }
  return pi;
}

int main() {
  int liczbaskładników[] = (0, 100, 1000,1000000, 1000000000);
  for (int i= 0; i<5; i++)
  printf("%f\n", pi);
  return 0;
}
