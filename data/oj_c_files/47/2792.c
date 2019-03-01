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
    int sz[100];
	int i,b,n;
	i=0;
    scanf("%d",&n);
	b=n-1;
	for(i=0;i<n;i++){
           scanf("%d",&sz[i]);
	}
	for(b=n-1;b>0;b--){
		printf("%d ",sz[b]);
	}
	    b=0;
		printf("%d",sz[b]);

	
	return 0;
}
     