#include <stdio.h>

int main()
{
    int n,i,sum;
    sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("\n%d",sum);
    return 0;
}
