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
	int m,n;
	scanf("%d%d",&n,&m);
	int i,j,sz[n],a;
         int *ptr;
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(j=0;j<m;j++){
                  ptr=&sz[n-1];
                  a=*ptr;
		for(i=n-1;i>0;i--){
			sz[i]=sz[i-1];
		}
                  sz[0]=a;
	}
	for(i=0;i<n-1;i++){
		printf("%d ",sz[i]);
	}
         printf("%d",sz[n-1]);
	return 0;
}