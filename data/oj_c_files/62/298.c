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
	char a[201],b[201];
	int i,n,m,k;
	k=0;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++){
		b[k]=a[i];
		k++;
		if(a[i]==32){
			for(m=i+1;m<n;m++)
				if(a[m]==32){
                    i++;
				}
				else{
                    break;
    			}
		}
	}
	b[k]='\0';
	puts(b);
	return 0;
}
