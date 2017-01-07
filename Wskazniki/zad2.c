#include <stdio.h>

int main () {
  double *wsk;
  double tab[2][2] = {{12, 14}, {16}};
  wsk = tab[0];


    printf("%f %f\n", *wsk, *(wsk +2));
    printf("%f %f\n", tab[0][0], tab[1][0]);
}
