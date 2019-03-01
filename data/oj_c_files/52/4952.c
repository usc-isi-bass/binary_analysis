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
    
	int a,c,b,d,n,m,i,x[1000],y[1000];
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++){
		scanf("%d",&x[i]);
		}
	for(i=1;i<=n-m;i++){
		y[i+m]=x[i];
	}
	
	for(i=n-m+1;i<=n;i++){
		y[i-n+m]=x[i];
	}
	for(i=1;i<=n;i++){
		if(i==1)printf("%d",y[i]);
		else printf(" %d",y[i]);
		}
		


}
