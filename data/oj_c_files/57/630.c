#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{   int i,n,j;
	char c[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",c);
		if(c[strlen(c)-1]=='r'){
			for(j=0;j<strlen(c)-2;j++){
				printf("%c",c[j]);
			}
			printf("\n");
		}
		if(c[strlen(c)-1]=='y'){
			for(j=0;j<strlen(c)-2;j++){
				printf("%c",c[j]);
			}
			printf("\n");
		}
		if(c[strlen(c)-1]=='g'){
			for(j=0;j<strlen(c)-3;j++){
				printf("%c",c[j]);
			}
			printf("\n");
		}
	}
	return 0;
}