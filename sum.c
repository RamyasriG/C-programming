#include <stdio.h>

int main()
{
    int nnn,i,sum;
    sum=0;
    scanf("%d",&nnn);
    for(i=1;i<=nnn;i++)
    {
        sum=sum+i;
    }
    printf("\n%d",sum);
    return 0;
}
