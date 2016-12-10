#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, j, wysokosc;

  scanf("%d", &wysokosc);

  for( i = 0; i < wysokosc; i++ )
  {
    printf( "%*c", wysokosc - i, ' ' );
    for ( j = 0; j <= i; j++ )
      printf( " *" );
    putchar( '\n' );
  }

  printf( "%*c*\n", wysokosc + 1, ' ' );
  return 0;
}
