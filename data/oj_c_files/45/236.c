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
	char a[50],b[50],c[50];
	int i,j,k,m,n;
	scanf("%s %s",a,b);
	m=strlen(a);
	n=strlen(b);
	for(i=0;i<=n-m;i++)
	{ for(j=0;j<m;j++)
	  c[j]=b[i+j];
	int num[50]={0};
	for(k=0;k<m;k++)
	{if(c[k]==a[k])
	    num[k]=1;
	else break;}
	if (num[m-1]==1)
	{printf("%d\n",i);
	break;
	}
	}
}