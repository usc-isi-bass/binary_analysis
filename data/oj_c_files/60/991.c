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

int sushu(int x)
{
int i;
int n;
int k;
int re;
n=x;
k=0;
for(i=1;i<=n;i++)
	{
      if(x%i==0)
		  k++;
	}
if(k==2)
re=1;
else
re=0;
return re;
}
int main()
{ 

	int n;
	int k=0;
	int i;
	scanf("%d",&n);
for(i=1;i<=n-2;i=i+2)
{
if(sushu(i)==1&&sushu(i+2)==1)
{
printf("%d %d\n",i,i+2);
k=k+1;
}
}
if(k==0)
printf("empty");
	return 0;
}