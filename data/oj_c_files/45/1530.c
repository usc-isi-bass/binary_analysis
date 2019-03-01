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
	int i,j,k,t,r,n=0;
	char a[60],b[60],c[60]={0};
	scanf("%s %s",a,b);
	r=strlen(a);
	t=strlen(b);
	for(i=0;i<t && n<1;i++)
	{
		if(b[i]==a[0])
		{
			k=i;
		   for(j=0;j<r;j++,k++)	
			   c[j]=b[k];
		   if(strcmp(c,a)==0)
		   {
			   n=n+1;
			   printf("%d\n",i);
		   }
		}
	}
}
               
