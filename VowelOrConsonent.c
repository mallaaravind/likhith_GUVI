#include <stdio.h>

int main(void) {
	// your code goes here
	char n;
	scanf("%c",&n);
	
	printf(n>=65 && n<=90 || n>=97 && n<=122?(n=='a' || n=='e'|| n=='i'|| n=='o'|| n=='u' ?"Vowel":"Consonent"):"Wrong entry");
	return 0;
}
