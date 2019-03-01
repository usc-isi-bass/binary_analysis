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

int m[1000][1000];
int main()
{
int n,i,j=0,p,x=0;
scanf("%d",&n);
for(i=0;i<n;i++){
	for(j=0;j<n;j++)
	{
	scanf("%d",&m[j][i]);
	}
}

for(i=0;i<n;i++)
	{
	p=0;
	j=0;
	while(m[j][i]!=0 && j < n)
		{
		j++;
		} 
	j=j+1;
	while(m[j][i]!=0 && j < n)
		{
		p++;
		j++;
		}
	x=x+p;
	}
	
printf("%d\n",x);
return 0;
}
