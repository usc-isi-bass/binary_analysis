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
{int *p,k,j,i,a[100000],n,m=0;
p=a;
scanf("%d",&n);
for (i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&k);
for (i=0;i<n;i++)
{
	if(*(p+i)==k)
	{
		while(*(p+i)==k)
		{
			for (j=i;j<n-m;j++)
				a[j]=a[j+1];
			m=m+1;
		}
	
	
	}
	
	
}

for (i=0;i<n-m-1;i++,p++)
printf("%d ",*p);

printf("%d",*p);


}
