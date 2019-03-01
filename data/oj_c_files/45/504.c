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
	char a[50],b[50];
	char *m,*n,*k;
	int i,j,p;
	scanf("%s %s",a,b);
	n=a;
	for(m=b,i=0;*m!='\0';m++,i++)
	{
		j=0;
		if(*n==*m)
		{
			for(k=m;*n!='\0';n++,k++,j++)
				if(*k!=*n)
					break;
		}
		if(j==strlen(a))
		{
			p=i;
			break;
		}
	}
	printf("%d\n",p);
}