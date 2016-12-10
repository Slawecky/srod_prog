#include <stdio.h>
#include <math.h>
double przeciwprostokatna(double a,double b) {
  double c;
  c = sqrt(a*a + b*b);
  return c;
}
int main() {
  double a, b, c;
  scanf("%lf %lf", &a, &b);     //Czytaj dane
  c = przeciwprostokatna(a,b);  // Policz wyniki
  printf("%lf\n", c);           // Wypisz wyniki
}
