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

/* Note:Your choice is C IDE */
void main()
{int i=0,j=0,flag=0,s1,s2,n,p,a[12],b[12];
	scanf("%d%d",&n,&p);
	while(n>0)
	{a[i]=n;
		n/=2;
		i++;}
    	while(p>0)
	{b[j]=p;
		p/=2;
		j++;}
	for(s1=0;s1<i&&flag!=1;s1++)
	{for(s2=0;s2<j&&flag!=1;s2++)
	{if(a[s1]==b[s2])flag=1;}
	}
	printf("%d",a[s1-1]);
}