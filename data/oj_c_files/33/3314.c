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

int main (){
	char a[260],b[260];
	int n,i,t;
	scanf("%d",&n);
	for(t=0;t<260;t++){
		b[t]='\0';
	}
	for(i=0;i<n;i++){
		scanf("%s",a);
		for(t=0;a[t]!='\0';t++){
			if(a[t]=='A'){
				b[t]='T';
			}
			if(a[t]=='C'){
				b[t]='G';
			}
			if(a[t]=='T'){
				b[t]='A';
			}
			if(a[t]=='G'){
				b[t]='C';
			}
		}
		b[t]='\0';
		printf("%s\n",b);
	}
		return 0;
}