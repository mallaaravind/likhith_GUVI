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
    if(p>=48 && p<=57){
	sum = sum + atoi(p);
	p = strtok (NULL, " ");	
    }
    else{
	printf ("0");
	return 0;
    }
  }
  printf ("%d\n",sum);
  return 0;
}
