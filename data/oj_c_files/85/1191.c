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
    char zf[30];
	int n,i,j,c,b;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",zf);
		b=0;
		c=0;
		for(j=0;zf[j]!='\0';j++){
			c++;
			if(((zf[0]<='z'&&zf[0]>='a')||(zf[0]<='Z'&&zf[0]>='A')||zf[0]=='_')&&((zf[j]<='z'&&zf[j]>='a')||(zf[j]<='Z'&&zf[j]>='A')||zf[j]=='_'||(zf[j]>='0'&&zf[j]<='9'))){
				b++;
			}
		}
		if(c==b)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}