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
	int n,*x,*y,*s,*z,i,j,o=0,t=0;
	scanf("%d",&n);
	x=(int*)malloc(sizeof(int)*n);
    y=(int*)malloc(sizeof(int)*n);
    s=(int*)malloc(sizeof(int)*n);
	z=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&x[i],&y[i],&s[i]);
		z[i]=y[i]+s[i];
	}
	for(j=0;j<3;j++)
	{
    for(i=0;i<n-1;i++)
	{
	 if(z[i]>=z[i+1])
	 {
       o=z[i];
       z[i]=z[i+1];
	   z[i+1]=o;
	   t=x[i];
       x[i]=x[i+1];
	   x[i+1]=t;
	 }
	}
	}
	printf("%d %d\n",x[n-1],z[n-1]);
    printf("%d %d\n",x[n-2],z[n-2]);
	printf("%d %d\n",x[n-3],z[n-3]);
return 0;
}
