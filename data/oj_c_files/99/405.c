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
	int n,s1=0,s2=0,s3=0,s4=0,i,a;
	double m,l,p,q;
	scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
			if(a>=1&&a<=18)
			{
				s1=s1+1;
			}
			else if(a>=19&&a<=35)
			{
				s2=s2+1;
			}
			else if(a>=36&&a<=60)
			{
				s3=s3+1;
			}
			else s4=s4+1;
		}
		m=(double)s1/n*100;
		l=(double)s2/n*100;
		p=(double)s3/n*100;
		q=(double)s4/n*100;
		printf("1-18: ");
		printf("%.2lf%\n",m);
		printf("19-35: ");
		printf("%.2lf%\n",l);
		printf("36-60: ");
		printf("%.2lf%\n",p);
		printf("60??: ");
		printf("%.2lf%\n",q);
	
			return 0;
}
