/** Pobrane od Dawida M. */
#include <stdio.h>
double przyblizenie_pi(int o) { // comment 1/3 mozna zrobic w int main
  int n=0,c=0;
  double pi=0;
  while(n<o) {
    if (c==0 && pi>=3.14 && pi<=3.15) {
      c=1;
      printf("Przyblizenie osiagnelo 3.14 przy elemencie nr %d\n", n);
    }
    else if (c==1 && pi>=3.141 && pi<=3.142) {
      c=2;
      printf("Przyblizenie osiagnelo 3.141 przy elemencie nr %d\n", n);
    }
    else if (c==2 && pi>=3.1415 && pi<=3.1416) {
      c=3;
      printf("Przyblizenie osiagnelo 3.1415 przy elemencie nr %d\n", n);
    }
    if (n%2==0) {
      pi=pi + 4.0/( n*2.0+1.0 ); // comment 2/3 ale trzeba uzywac 4.0 itd.
    }
    else {
      pi=pi - 4.0/( n*2.0+1.0 ); // comment 3/3 inaczej liczy jak int
    }
    n++;
  }
  return pi;
}
int main() {
  printf("10 elementow %lf\n", przyblizenie_pi(10));
  printf("100 elementow %lf\n", przyblizenie_pi(100));
  printf("1000 elementow %lf\n", przyblizenie_pi(1000));
  printf("1 000 000 elementow %lf\n", przyblizenie_pi(1000000));
}
