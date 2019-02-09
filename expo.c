#include <stdio.h>

int main()
{
   int n,e,r=1;
   scanf("%d",&n);
   scanf("%d",&e);
   while(e!=0)
   {
       r=r*n;
       --e;
   }
   printf("%d",r);
    return 0;
}
