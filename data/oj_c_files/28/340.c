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
	char a[1000],c,*p;
	int b[1000],i,j,n,m=0;
    gets(a);
	n=strlen(a);
	for(p=a;p<a+n;p++)
	{
		
		if(*p==' ') m=m+1;
	}
	j=0;
	for(i=0;i<=m;i++) b[i]=0;
	for(p=a;p<a+n;p++)
	{
		
		if(*p==' ') 
		{   
			j++;
			continue;
		}
		else
		{
			b[j]=b[j]+1;
		}
	}
	printf("%d",b[0]);
	for(i=1;i<=m;i++) 
	{
		if(b[i]!=0) printf(",%d",b[i]);
	}

    


}
	
