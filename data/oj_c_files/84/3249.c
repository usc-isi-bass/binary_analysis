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
	int a;
	scanf("%d",&a);
	int i;
	int max1;
	int max2;
	int b;
	int c;
	scanf("%d%d",&b,&c);
	max1=b;
	max2=c;
	int k;
	int t;
	if (max1<max2) 
	{
		t=max1;
		k=max2;
		max1=k;
		max2=t;
	}
	for (i=2;i<a;i++)
	{
        int m;
		scanf("%d",&m);
		if(m>max1)
		{
			max2=max1;
			max1=m;
		}
		else if(m>max2)
		{
			max2=m;
		}
        
	
	}
	printf("%d\n%d",max1,max2);

}
	