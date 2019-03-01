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
{
	char c[256];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",c);
		for(j=0;(c[j]!='\0');j++){
			if(c[j]=='A'){
				c[j]='T';
			}
			else if(c[j]=='T'){
				c[j]='A';
			}
			else if(c[j]=='C'){
				c[j]='G';
			}
			else if(c[j]=='G'){
				c[j]='C';
			}
		}
		for(j=0;(c[j]!='\0');j++){
			printf("%c",c[j]);
		}
		printf("\n");
	}
	return 0;
}