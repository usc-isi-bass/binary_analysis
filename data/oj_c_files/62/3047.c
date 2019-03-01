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
	char suoyou[200];
	gets(suoyou);
	int i,n;
	int a,l=0;
	n=strlen(suoyou);
	for(i=1;i<n;i++){
		if(suoyou[i-1]==' '){
			if(suoyou[i]==' '){
				for(a=i-1;a<n;a++){
					suoyou[a]=suoyou[a+1];
					suoyou[n-l]='\0';
					
				}
				l++;
				i--;
			}
		}
	}
	puts(suoyou);
	return 0;
}