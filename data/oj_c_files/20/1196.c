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
	
	int i,j,k,n,m;
	while(1)
	{
		char a[50]={'0'},b[20]={'0'},c[20]={'0'};
		scanf("%s %s",a,b);
		if(a[0]=='\0')
			break;
		n=strlen(a);
		for(i=0;i<n;i++)
		{
			k=0;
			for(j=0;j<n;j++)
			{
				if(a[i]<a[j])
					k++;
			}
			if(k==0)
			{
				m=i;break;}
		}
		for(i=0;i<n-m;i++)
		{
			c[i]=a[i+m+1];
			a[i+m+1]='\0';
		}
		strcat(a,b);
		strcat(a,c);
		if(a[0]=='0')
			break;
		else
		    printf("%s\n",a);
	}
	return 0;
}
