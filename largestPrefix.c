#include <stdio.h>
#include <string.h>

int isIndexMatch(int in, char a){
    
}
int main(void) {
	// your code goes here
	char a[20][20];
	char b[20];
	int n,i,j;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%s", a[i]);
	}
	for(i=1;i<n;i++){
        for(j=0;j<20;j++){
            if(a[i][j]!=a[i-1][j]){
                memcpy(b, a[0], j);
                b[j]='\0';
                printf("Largest prefix is %s",b);
                return 0;
            }
        }
    }
	for(i=0;i<n;i++){
		printf("%s", a[i]);
	}
	return 0;
}
