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
	int i,j,x,m=0,p=0,t=0;
	char a[10000];
	gets(a);
    for(i=0;a[i]!='\0';i++)
	{
		t++;
	}
	for(i=0;i<=t;i++)
	{
		if(a[i]!=' '&&a[i]!='\0')
			 p++;				
		if(a[i]==' ')
		{
		   if(p!=0)
		   {
			   printf("%d,",p);
		       p=0;
		   }
		}
		if(a[i]=='\0')
		{
		   if(p!=0)
		   {
			   printf("%d",p);
		       p=0;
		   }
		}
	}
}
	