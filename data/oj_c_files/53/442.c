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
	int a[305],b[305],i,k,n,c;
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);
	b[i]=a[i];}
    printf("%d",a[0]);
    for(i=1;i<n;i++)
	{for(k=0;k<=i-1;k++)
	{if(a[i]!=b[k])
	{c=1;}
	else if(a[i]==b[k])
	{c=0;break;}
	}
	if(c==1)
	{printf(",%d",a[i]);}
	}
	}