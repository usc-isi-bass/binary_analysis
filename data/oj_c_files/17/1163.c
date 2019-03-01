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
{int k,i,l,j,n=1,t,h,m;
char a[200];
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%s",a);
l=strlen(a);
for(j=0;j<l;j++)
{printf("%c",a[j]);
}

printf("\n");
for(j=0;j<l;j++)
{
	if(a[j]=='(')
	{	a[j]='$';}
	else if(a[j]==')')
	{
		for (k=j;k>=-1;k--)
		{ if(k==-1)
			{a[j]='?';break;}
			if (a[k]=='$')
			{
				a[k]=' ';a[j]=' ';break;
			}
			
		}
		
	}
	else a[j]=' ';
	
}

for(j=0;j<l;j++)
{printf("%c",a[j]);
}

printf("\n");




}
return 0;
}