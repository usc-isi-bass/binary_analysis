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

int main(int argc, char* argv[])
{
    int la,lb,i,j,n,k,x,p;
	char a[100],b[100],c[100],d[100];
	scanf("%s %s %s",a,b,d);
	la=strlen(a);
	lb=strlen(b);
	n=la-lb;
	for(i=0;i<=n;i++)
	{
        if(b[0]==a[i])
		{
			k=i;
			p=i;
			for(j=0;j<lb;j++)
			{
				c[j]=a[k];
				k++;
			}
			c[lb]='\0';
			if(strcmp(c,b)==0)
			{
				for(x=0;x<lb;x++)
				{
					a[p]=d[x];
					p++;
				}
				break;
			}
		}
		else 
			continue;
	}


printf("%s",a);
				return 0;
	
}