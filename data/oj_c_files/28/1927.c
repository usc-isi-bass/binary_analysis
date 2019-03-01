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
	char a[10000];
	int s,t=0;
	int n,i;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++){
		if(a[i]!=' '){
			s=0;
			while(1){
				s++;
				i++;
				if(a[i]==' '||i>=n)
					break;
			}
			if(t==0){
				t++;
			    printf("%d",s);
			}
			else
				printf(",%d",s);
		}
	}
    return 0;
}