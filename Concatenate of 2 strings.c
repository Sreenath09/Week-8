/*C program to concatenate two strings and find the length of resultant string without using built in functions*/
#include <stdio.h>
int main()
{
  char s1[100] = "I love ", s2[] = "BMS";
  int l,j;

  l = 0;
  while (s1[l] != '\0')
  {
    ++l;
  }
  for (j = 0; s2[j] != '\0'; ++j, ++l) {
    s1[l] = s2[j];
  }

  s1[l] = '\0';

  printf("After concatenation: ");
  puts(s1);

  return 0;
}
