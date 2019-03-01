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
	int a[300],i,n=0,k=1,m;
	char p;
	scanf("%d%c",&a[1],&p);
	while(p==',')
	{
		k++;
		scanf("%d%c",&a[k],&p);
	}
	if(k==1){printf("No");}
	else
	{
	    m=a[1];
		for(i=2;i<=k;i++){if(m<a[i])m=a[i];}
		for(i=1;i<=k;i++){if(a[i]>n&&a[i]!=m)n=a[i];}
		if(n==0){printf("No");}
        else{printf("%d",n);}
	}
	return 0;
}