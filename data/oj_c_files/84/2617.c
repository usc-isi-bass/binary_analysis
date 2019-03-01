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
	int n,a[99],f,s,i;
	scanf("%d",&n);
    for(i=0;i<=n-1;i++)
		scanf("%d",a+i);
	for(i=1,f=a[0];i<=n-1;i++)
		if(a[i]>f) f=a[i];
    for(i=0;i<=n-1;i++)
		if(a[i]<f) break;
    for(s=a[i],i=i+1;i<=n-1;i++)
		if(a[i]>s&&a[i]<f) s=a[i];
    printf("%d\n%d\n",f,s);
    return(0);
}