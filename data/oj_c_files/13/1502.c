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
int a[10000],i,j,n,t,count;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{t=0;count=0;
	for(j=i;j>=0;j--)
	{count++;
		if(a[i]==a[j]&&(i!=j) )
		{t=1;
		break;}
	}
	if(t==0&&count==1)
	{
		printf("%d",a[i]);}
	else if((t==0)&&(count!=1)) 
	{
        printf(" %d",a[i]);
	}
     
} 
	return 0;
}

