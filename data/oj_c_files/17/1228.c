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
	int i,n,b,k,t,m,p;
	char a[1000]={0};
	scanf("%d",&n);
	for(p=0;p<n;p++)
	{
		scanf("%s",a);
		printf("%s\n",a);
		b=strlen(a);
	  for(m=0;m<b;m++)
	  {
		if(a[m]!='('&&a[m]!=')')
		{
			a[m]=' ';
		}
	  }
  	for(i=0;i<b;i++)
	{
		if(a[i]==')')
		{
			for(t=i;t>=0;t--)
			{
				if(a[t]=='(')
				{
					a[i]=' ';
					a[t]=' ';
					break;
				} 
			}
		}
	}
	for(k=0;k<b;k++)
	{
		if(a[k]=='(')
		{
			a[k]='$';
		}
		else if(a[k]==')')
		{
			a[k]='?';
		}
	}
	printf("%s\n",a);
	}
	return 0;
}