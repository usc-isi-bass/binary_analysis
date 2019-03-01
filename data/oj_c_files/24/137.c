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
	char a[1000],b[1000][50];
	int n=0,p,i,j,s,m;
	gets(a);
	s=strlen(a);
	for(i=0;i<=s-1;)
	{
		for(j=i,m=0;a[j]!=' '&&j<=s-1;j++,m++)
			b[n][m]=a[j];//?????????
		b[n][m]='\0';//?????!!!
		n++;//?????
		i=j;
        if(a[i]==' ')
			i++;
	}
	for(i=0;i<=n-1;i++)
	{
		for(p=j=0;j<=n-1;j++)
		{
			if(strlen(b[i])>=strlen(b[j])) 
			p++;
		}
	    if(p==n) 
		{
		    printf("%s\n",b[i]);
		    break;
		}
	}
    for(i=0;i<=n-1;i++)
	{
		for(p=j=0;j<=n-1;j++)
		{
			if(strlen(b[i])<=strlen(b[j]))
			p++;
		}
	    if(p==n) 
		{
		    printf("%s\n",b[i]);
		    break;
		}
	}
}
	
	
	


