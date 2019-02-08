#include <stdio.h>

int main()
{
    int n,rem,count,sum;
    sum=0;
    count=0;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
        count++;
    }
    printf("%d",count);
    return 0;
}
