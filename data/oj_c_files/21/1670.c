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


struct number
{
    unsigned int shuzi;
	float pianli;
};

int main()
{
int i,j,n;
float average,sum=0;
scanf("%d",&n);

struct number num[301],t;

for(i=0;i<n;i++)
	scanf("%d",&num[i].shuzi);
for(i=0;i<n;i++)
sum=sum+num[i].shuzi;
average=sum/(float)n;
for(i=0;i<n;i++)
num[i].pianli=fabs(num[i].shuzi-average);
for(j=0;j<n;j++)
for(i=0;i<n-j-1;i++)
{if(num[i].pianli>num[i+1].pianli)
{
	t=num[i];
	num[i]=num[i+1];
	num[i+1]=t;
}
else
{
	if(num[i].pianli==num[i+1].pianli)
{ if(num[i].shuzi>num[i+1].shuzi)
	  { 	t=num[i];
	num[i]=num[i+1];
	num[i+1]=t;}
}
}
}

for(i=0;i<n-1;i++)
{
	
	if(num[i].pianli==num[n-1].pianli)
	{printf("%d,", num[i].shuzi);}

}
	printf("%d", num[n-1].shuzi);

	
return 1;
	}