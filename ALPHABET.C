#include <stdio.h>

int main()
{
   char cs;
   scanf("%c",&cs);
   if((cs>='a'&&cs<='z')||(cs>='A'&&cs<='Z'))
   {
       printf("Alphabet");
   }
   else
   {
       printf("No");
   }
    return 0;
}
