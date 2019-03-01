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

int main(int argc, char* argv[])
{
	int p[1000][1000];
    int a=0,b=0;
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		   if(p[i][j]==0)
		   {
	    	a++;
		   }
		}
		if(a!=0) break;
	}
    for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
          if(p[i][j]==0)  b++;
		}
		if(b!=0)   break;
	}
	int sum=0;
	sum=(a-2)*(b-2);
	printf("%d",sum);
	return 0;
}