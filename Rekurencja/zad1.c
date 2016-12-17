#include <stdio.h>

int nk(int podstawa, int  wykladnik);

int main() {
  printf(" 5^4 = %d\n ", nk(5, 4));
  printf(" 5^0 = %d\n ", nk(5, 0));
}

    int nk(int podstawa, int wykladnik) {
      if (wykladnik == 0 )
      return 1;
      else
      return podstawa * nk(podstawa, wykladnik - 1);
    }
