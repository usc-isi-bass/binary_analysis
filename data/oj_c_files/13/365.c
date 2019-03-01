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
    unsigned int n;
	int i,j,a[20000],m;
	scanf("%u",&n);
	for(i=0;i<=n-1;i++)
	   scanf("%d",&a[i]);
    printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		m=0;
	    for(j=0;j<i;j++)
	     if(a[i]==a[j]) 
		 {
		 m=1;
		 break;
		 }
	    if(m==0)
        printf(" %d",a[i]);
	}
    printf("\n");
}