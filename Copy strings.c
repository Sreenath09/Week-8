/* C program to copy one string to another string and find its length without using built in functions*/
#include<stdio.h>
int main()
{
    char s1[1000],s2[1000];
    int i;

    printf("Enter any string: ");
    gets(s1);
   for(i=0;s1[i];i++)
    {
    	s2[i]=s1[i];
	}
	s2[i]='\0';

    printf("Original string s1='%s'\n",s1);
    printf("\nCopied string   s2='%s'",s2);

    for (i = 0; s2[i] != '\0'; ++i);

    printf("\n\nLength of the string: %d", i);
    return 0;
}
