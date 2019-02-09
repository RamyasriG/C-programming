#include <stdio.h>

int main()
{
   char csP;
   scanf("%c",&csP);
   if((csP>='a'&&csP<='z')||(csP>='A'&&csP<='Z'))
   {
       printf("Alphabet");
   }
   else
   {
       printf("No");
   }
    return 0;
}
