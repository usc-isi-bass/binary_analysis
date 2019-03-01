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
	int m,la,lb,x,i;
	double r0,r1;
	char a[505],b[505];
	scanf("%lf",&r0);
	scanf("%s",a);
	scanf("%s",b);
	la=strlen(a);
	lb=strlen(b);
	if(la!=lb)
		printf("error\n");
	else
	{
		x=1;
	    for(i=0,m=0;i<la;i++)
		{
		    if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')
			{
				printf("error\n");
				x=0;
				break;
			}
			else if(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')
			{
				printf("error\n");
				x=0;
				break;
			}
			else
			{
				if(a[i]==b[i])
				    m++;
			}
		}
		r1=1.0*m/la;
		if(x==1)
		{
			if(r1>r0)
				printf("yes\n");
			else
				printf("no\n");
		}
	}
	return 0;
}