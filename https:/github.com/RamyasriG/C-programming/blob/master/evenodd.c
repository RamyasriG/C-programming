#include<stdio.h>
 
int main() {
	// your code goes here
	int num;
	scanf("%d",&num);
	if(num<0)
	{
		printf("invalid");
	}
	else
	{
	if(num%2==0)
	{
		printf("\n Even");
	}
	else if(num%2!=0)
   {
	printf("\nOdd");
   }
	}
	return 0;
}
