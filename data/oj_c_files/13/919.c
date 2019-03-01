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
int n,a[20001],t,i,m;
scanf("%d",&n);
for (i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for (i=0;i<n;i++)
{
	m=1;
	for(t=0;t<i;t++)
	{
		if(a[i]==a[t])
		{
			m=0;
		}
	}
	if(m==1)
	{
	 if(i>0)
	 {
	 printf(" ");
	 }
     printf("%d",a[i]);

	}

}
} 