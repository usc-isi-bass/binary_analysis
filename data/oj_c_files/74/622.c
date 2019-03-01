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
	int a,b,t,i,p=0,k,c[100];
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		char str[20];
        int flag=0;
		sprintf(str,"%d",i);
		k=strlen(str);
		for(t=0;t<k;t++)
		{
			if(str[t]!=str[k-t-1])
				flag=1;
		}
		for(t=2;t<i;t++)
		{
			if(i%t==0)
				flag=1;
		}
		if(i==2)
			flag=0;
		if(flag==0)
		{
			c[p]=i;
			p++;
		}
	}
	if(p==0)
		printf("no");
	if(p==1)
		printf("%d",c[0]);
	if(p>1)
	{
		printf("%d",c[0]);
		for(i=1;i<p;i++)
		{
            printf(",%d",c[i]);
         }
}
return 0;
}
