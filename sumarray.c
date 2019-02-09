#include <stdio.h>

int main()
{
   int i,N,K,sum=0;
   int a[100];
   scanf("%d",&N);
   scanf("%d",&K);
    for(i=0;i<K;i++)
   {
       scanf("%d ",&a[i]);
       sum=sum+a[i];
   }
   printf("%d",sum);
    return 0;
}
