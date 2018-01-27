#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
	// your code goes here
	char a[50];
	char b[50];
	int i=1, j=1;
	scanf("%s", a);
	if(strlen(a)>1)
	    b[0]=a[0];
	for(;i<strlen(a);i++){
	    if(a[i]==a[i-1]){
	        continue;
	    }
	    else{
	        b[j]=a[i];
	        j++;
	    }
	}
	printf("%s", b);
	return 0;
}
