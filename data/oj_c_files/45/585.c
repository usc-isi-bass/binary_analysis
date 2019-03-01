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
	char a[50],b[50],*p1,*p2;
	int m,n,c,i,j,flag;
	scanf("%s %s",a,b);
	p1=a;
	p2=b;
	m=strlen(a);
	n=strlen(b);
	for(i=0;i<n;i++)
	if(*(p2+i)==*p1)
	{
		c=i;
		flag=1;
		for(j=c;j<c+m;j++)
		if(*(p2+j)!=*(p1+j-c))
		{
			flag=0;
			break;
		}
		if(flag==1)
		{
			printf("%d",c);
			break;
		}
	}
	return (0);
}