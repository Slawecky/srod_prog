#include <stdio.h>

int main() {

  int tabela[] = {1, 2, 4, 6, 12};
  int n = sizeof(tabela) / sizeof(int);

  for (int i = n-1; i >= 1; i--) {
    printf("%d ",tabela[i]);
    return 0;
  }
}
