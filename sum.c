#include <stdio.h>
#include <string.h>
int main ()
{
  char string[50];
  char *p;
  int sum = 0;
  scanf("%[^\n]",string);
  p = strtok (string," ");
  while (p!= NULL)
  {
    sum = sum + atoi(p);
    p = strtok (NULL, " ");
  }
  printf ("%d\n",sum);
  return 0;
}
