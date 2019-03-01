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
	char x[101];
	int i,l,t,j,L;
	gets(x);
	l=strlen(x);
	t=0;
	L=l;
	for(i=0;i<l;i++){
		if(x[i]==' '){
			if(t==1){
				for(j=i;j<l-1;j++){
					x[j]=x[j+1];
				}
				L--;
				i--;
			}
			else{
				t=1;
			}
		}
		else{
			t=0;
		}
	}
	x[L]='\0';
	puts(x);
	return 0;
}