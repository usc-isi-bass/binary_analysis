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
	int i,j,m,n,c=0;
	char a[40],b[40],k;
	scanf("%s%s",&a,&b);
	m=strlen(a);
	n=strlen(b);
	if(m==n)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<=i;j++)
			{
				if(a[j]>a[i])
				{
					k=a[j];a[j]=a[i];a[i]=k;
				}
				if(b[j]>b[i])
				{
					k=b[j];b[j]=b[i];b[i]=k;
				}
			}
		}
	    for(i=0;i<m;i++)
		{
			if(a[i]!=b[i])
			{	c=1;
			break;}
		}
		if(c==0)
			printf("YES");
		else printf("NO");
	}
	else printf("NO");
}