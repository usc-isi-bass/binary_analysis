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
	char str1[50],str2[50],*p;
	int a,b,i,j,c[20],d=0;
	scanf("%s%s",&str1,&str2);
	a=strlen(str1);
	b=strlen(str2);
p=str2;
	if(a==b)
	{{for(i=0;i<a;i++)
	{c[i]=0;
		for(p=str2;p<a+str2;p++)
	{if(str1[i]==*p)
		{c[i]=1;continue;}
		}
	}}
for(i=0;i<a;i++)
	{if(c[i]==0)
{d=1;break;}}
if(d==1)
{printf("NO");}
else
printf("YES");
}
	else
		printf("NO");
}
