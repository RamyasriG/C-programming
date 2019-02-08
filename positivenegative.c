
#include<stdio.h>
 
int main() {
	// your code goes here
	int number;
	scanf("%d",&number);
	if(number>0)
	{
		printf("\nPositive");
	}
	else if(number<0)
   {
	printf("\nNegative");
   }
   else
  {
	printf("\nZero");
  }
	return 0;
}
