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
	int n,k,i,j,a[1000],m,t=0;
	scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if((n==1)&&(a[0]==k)){
           t=1;
	}

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i!=j)
				m=a[i]+a[j];
			if(m==k)
				t=1;
		}	
	}
       	if(t==1)
		printf("yes");
	else
		printf("no");
	return 0;
}