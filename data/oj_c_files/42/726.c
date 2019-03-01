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
	int n,a,i,b,s;
	int *p,*q,*m;
    p=(int *)malloc(100000*sizeof(int));
	s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		p[i]=a;
	}
	q=p;
	scanf("%d",&b);


	for(i=0;i<n;)
	{
		if(*q==b)
		{
			for(m=q;m<q+n-i;m++)
			{
				*m=*(m+1);
			}
			s=s+1;

		}
		else
		{i++;
		q++;}
	}
   q=p;
   printf("%d",*q);
   q++;
   for(i=1;i<n-s;i++,q++)
	   printf(" %d",*q);
   
}
	