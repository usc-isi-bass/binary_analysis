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
	char str[100],c;
	int i,j,p,n,b[100],a[100];
	scanf("%s",str);
    for(i=j=0;(c=str[i])!='\0';i++)
	{
         if(c!=str[0])b[j++]=i;
	}
	n=j;
	for(j=0;j<n;j++)
	{
		if(str[b[j]-1]==str[0])a[j]=b[j]-1;
        else 
		{
			for(i=b[j]-1;;i--)
		{   for(p=0;p<j;p++)
		{if(i!=a[p]&&i!=b[p])continue;else break;}
        if(p!=j)continue;
		else if(str[i]==str[0]){a[j]=i;break;}
		}
		}
	}
	for(j=0;j<n;j++)
		printf("%d %d\n",a[j],b[j]);
}