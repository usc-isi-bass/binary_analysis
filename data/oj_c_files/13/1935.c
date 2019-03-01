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
	int a[20000],t,j,m,i,asd;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{t=1;
	scanf("%d",&a[i]);
	if(i==0)
	{printf("%d",a[i]);}
	else if(i!=0)
	{
	for(j=0;j<i;j++)
    {asd=a[i]-a[j];
	if(asd==0)
	{t=0;
	break;}
	}if(t==1)
		printf(" %d",a[i]);
	
	}
	}
	
	printf("\n");
	return 0;
	}	
