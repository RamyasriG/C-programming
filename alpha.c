#include <stdio.h>

int main()
{
    char ch;

    /* Input character from user */
   
    scanf("%c", &ch);


    /* Condition for vowel */
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("Vowel");
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        /* Condition for consonant */
        printf("Consonant");
    }
    else 
    {
        /*
         * If it is neither vowel nor consonant
         * then it is not an alphabet.
         */
        printf("invalid");
    }

    return 0;
}
