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
	char a[200],b[200],c[200];
	gets(a);
	gets(b);
	gets(c);
	int i,j,l,t,k=0;
	l=(int)strlen(a);
    t=(int)strlen(b);
	for(i=0;i<l;i++)
	{
		for(j=0;j<t;j++)
		{
			if(i+j-1>l)
				break;
			if(a[i+j]==b[j])
				k=k+1;
			if((a[i-1]==' '||i==0)&&k==t&&(a[i+t]==' '||i==l-t))
			{
				printf("%s",c);
				i=i+t;
			}
		}
		if(i>l-1)
			break;
		if((k!=t||(t==k&&(a[i-1]!=' '||i!=0)||a[i+t]!=' '||i!=l-t)))
				printf("%c",a[i]);
		k=0;
	}
	return 0;
}