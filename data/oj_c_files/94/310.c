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
	int n,e,i,c,a[500],b[500];
	scanf ("%d",&n);
	for(i=0;i<n;i++){
		scanf ("%d",&a[i]);
	}
	c=0;
	for(i=0;i<n;i++){
		b[i]=0;
	}
	for(i=0;i<n;i++){
		if (a[i]%2!=0){
			b[c]=a[i];
			c++;
		}
	}
    for(int o = 1 ; o <= c ; o++){
	    for(i = 0; i < c - o; i++){
			    if(b[i] < b[i+1]){
					    e = b[i+1];
					    b[i+1] = b[i];
					    b[i] = e;
				}
		}
	}
	i=c-1;
	while (i>=0){
		if (i>0){
			printf("%d,",b[i]);
		}else {
			printf("%d",b[i]);
		}
		i--;
	}


return 0;
}