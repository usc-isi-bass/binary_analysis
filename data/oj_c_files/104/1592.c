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
	int m,n,x[12],y[12],i,j,l1,l2,t=0;
	scanf("%d%d",&m,&n);
	x[0]=m;y[0]=n;
	for(i=1;x[i-1];i++)
		x[i]=x[i-1]/2;
	l1=i-1;
	for(i=1;y[i-1];i++)
		y[i]=y[i-1]/2;
	l2=i-1;
    for(i=0;i<l1;i++){
		for(j=0;j<l2;j++){
			if(x[i]==y[j]){
				printf("%d",x[i]);
				t=1;
				break;
			}
		}
		if(t) break;
	}
    return 0;
}
