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
	int n;
	scanf("%d",&n);
	char a[100],b[100];
	int i;
	for(i=0;i<n;i++)
	{
	    scanf("%s %s",a,b);
		int ka=strlen(a);
		int kb=strlen(b);

		int aa[100]={0},bb[100]={0},c[100]={0};
		int j;
		for(j=0;j<ka;j++)
		{
			aa[j]=a[ka-1-j]-'0';
		}
		for(j=0;j<kb;j++)
		{
			bb[j]=b[kb-1-j]-'0';
		}
	
		for(j=0;j<ka;j++)
		{
			if(aa[j]>=bb[j])
			c[j]=aa[j]-bb[j];
			else
			{
				c[j]=aa[j]-bb[j]+10;
				aa[j+1]=aa[j+1]-1;
		}
			
		}
		if(c[ka-1]!=0)
			printf("%d",c[ka-1]);
		for(j=ka-2;j>=0;j--)
		{

			
			printf("%d",c[j]);
		}
		printf("\n");
	}

}