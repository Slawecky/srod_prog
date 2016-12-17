#include <stdio.h>
#include <math.h>

void trojkaty_pitagorejskie();

int main() {
  trojkaty_pitagorejskie();
}

void trojkaty_pitagorejskie() {

  for(int pierwszy_bok=1;pierwszy_bok<=666;pierwszy_bok++){

    for(int drugi_bok=pierwszy_bok;drugi_bok<=666;drugi_bok++){

      for (int trzeci_bok=drugi_bok; pierwszy_bok+drugi_bok+trzeci_bok <= 666; trzeci_bok++){

        if(pierwszy_bok*pierwszy_bok + drugi_bok*drugi_bok==trzeci_bok*trzeci_bok){

          printf("%d\t%d\t%d\n", pierwszy_bok, drugi_bok, trzeci_bok);
        }
      }
    }
  }
}
