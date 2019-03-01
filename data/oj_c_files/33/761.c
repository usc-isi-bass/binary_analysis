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

int main(){
	char k[1000];
    int i,n,j;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		gets(k);
        for(j=0;k[j]!='\0';j++){
			if(k[j]=='A') printf("T");
			else if(k[j]=='T') printf("A");
			else if(k[j]=='C') printf("G");
			else if(k[j]=='G') printf("C");
		}
		if(k[j]=='\0') printf("\n");
	}
    return 0;

}
