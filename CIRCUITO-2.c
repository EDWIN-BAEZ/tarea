#include <stdio.h>

main()
{
    int cont=0;
    int n;

printf("\n introduce el valor de n: \n");
scanf("%d",&n);

while(cont<=n+n+1)
    {

    printf("-> %d \n",(3*n)+(cont*2));

    cont=cont+1;

    }

return 0;

}
