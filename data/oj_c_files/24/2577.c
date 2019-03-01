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

int main ()
{
	int m,n,p[200]={0},i=0,j=0,b=0,c=10;
	char q[10];
scanf("%d",&n);
gets(q);
char a[200][200];
for(i=0;i<n;i++)
{
scanf("%s",&a[i]);
}
for(i=0;i<n;i++)
{
p[i]=strlen(a[i]);
}
for(i=0;i<n;i++)
{
if(b<p[i])
b=p[i];
}
for(i=0;i<n;i++)
{
if(c>p[i])
c=p[i];
}
for(i=0;i<n;i++)
{
if(p[i]==b)
{
	
		printf("%s\n",a[i]);
	break;
}
}
for(i=0;i<n;i++)
{
if(p[i]==c)
{
	
		printf("%s",a[i]);
	break;
}
}
return 0;
}