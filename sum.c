#include <stdio.h>

int main()
{
    int nn,i,sum;
    sum=0;
    scanf("%d",&nn);
    for(i=1;i<=nn;i++)
    {
        sum=sum+i;
    }
    printf("\n%d",sum);
    return 0;
}
