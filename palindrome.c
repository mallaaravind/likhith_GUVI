#include <stdio.h>
#include <string.h>

int main(void) {
	// your code goes here
	int n=0, i;
	char a[10];
	scanf("%[^\n]", a);
	n = strlen(a);
	for(i=0;i<strlen(a)/2;i++){
		if(a[i]==a[n-i-1]){
			continue;
		}
		else{
			printf("not a palindrome");
			return 0;
		}
	}
	printf("is a palindrome");
	return 0;
}
