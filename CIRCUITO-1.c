#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=0, y, x, n;

  printf("\n introduce el valor de n: \n");
  scanf("%d", &n);

  while(cont<=n)
  {
    y=cont;
    x=(n*n)-2*y;
    printf("-> %d \n", x);
    cont=cont+1;
  }

  return 0;
}
