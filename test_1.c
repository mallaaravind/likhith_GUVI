#include <stdio.h>

int main(void) {
	// your code goes here
	char a[50];
	int n, i;
	scanf("%[^\n]", a);
	scanf("%d", &n);
	for(i=0;i<n;i++)
		printf("%s\n", a);
	return 0;
}
