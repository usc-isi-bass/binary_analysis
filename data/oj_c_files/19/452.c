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
	char s[100],a[100],b[100],c[100][50];
	char *p1=s,*p3=b;
	int i=0,j=0,n;
	gets(s);   gets(a);  gets(b);
    for( ;*p1!='\0';p1++)
	{
		if(*p1!=' ')
		{
			c[i][j]=*p1;//?????????????????
			j++;
		}
		else 
		{  
			c[i][j]='\0';
			i++;
			j = 0;//?????0?????c[i][0].
		}
		
	}
	c[i][j]='\0';//??????????????'\0'???????????? ?????c[i]?
    n=i;
	for(i=0;i<=n;i++)
	{
		if(strcmp(c[i],a)==0)
		{
			for(j=0;*p3!='\0';p3++,j++)
			c[i][j]=*p3;
		    c[i][j]='\0';
		}
		p3=b;//????c[i]?a.
	}
	for(i=0;i<n;i++)
	{
		printf("%s ",c[i]);
	}
		printf("%s",c[i]); //????????? ?????????
}
