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

void main()
{
	int n,zj,m;
	int *p,*q;
	int a[101];
    scanf("%d",&n);
    for(p=a;p<a+n;p++)
    scanf("%d",p);
    m=(n-1)/2;
    for(p=a,q=a+n-1;p<a+m+1;p++,q--)
    {
    	zj=*p;*p=*q;*q=zj;
    }
    for(p=a;p<a+n-1;p++)
    printf("%d ",*p);
    printf("%d",*(a+n-1));
    
    
    
}