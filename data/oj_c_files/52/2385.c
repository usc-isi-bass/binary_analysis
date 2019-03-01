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
	int n,m,i,k,sz[101];
	scanf("%d %d",&n,&m);
    
	for(i=m;i<n+m;i++){
		scanf("%d",&sz[i]);
	}
	i=n;
	k=0;
	while(i<n+m){
		sz[k]=sz[i];
		k++;
		i++;
	}
	for(i=0;i<n-1;i++){
		printf("%d ",sz[i]);
	}
         printf("%d",sz[n-1]);
return 0;
}
