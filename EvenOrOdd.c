#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	printf(isdigit(n)?(n%2==0?"Even":"Odd"):"Wrong Entry");
	return 0;
}
