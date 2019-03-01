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
	int n,i,j,an,bn,c[100];
	char a[100],b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		scanf("%s",a);
		scanf("%s",b);
		an=strlen(a);
		bn=strlen(b);
		for(j=0;j<an;j++)
		{
			if(j<an-bn)
				c[j]=a[j]-48;
			else
				if(a[j]>=b[j+bn-an])
					c[j]=a[j]-b[j+bn-an];
				else
				{
					c[j]=a[j]+10-b[j+bn-an];
					if(c[j-1]!=0)
					{
						c[j-1]=c[j-1]-1;
					}
					else
						if(c[j-2]!=0)
						{
							c[j-1]=9;
							c[j-2]=c[j-2]-1;
						}
						else
							if(c[j-3]!=0)
					{
						c[j-1]=9;
						c[j-2]=9;
						c[j-3]=c[j-3]-1;
					}
				}
		}
		for(j=0;j<an;j++)
		{
			printf("%d",c[j]);
			if(j==an-1)
				printf("\n");
		}
	}
}
