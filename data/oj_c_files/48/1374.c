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
	int a[11][11],m,n,i,j,t,b[11][11];
    for(i=0;i<11;i++)
	{
		for(j=0;j<11;j++)
		{
		 a[i][j]=0;
		 b[i][j]=0;
	    }
    }
	scanf("%d %d",&m,&n);
	a[5][5]=m;
	for(t=0;t<n;t++)
    {
		for(i=1;i<10;i++)
		{
		for(j=1;j<10;j++)
		{
		b[i][j]=a[i][j]+(a[i][j-1]+a[i][j+1]+a[i-1][j-1]+a[i-1][j]+a[i+1][j+1]+a[i+1][j]+a[i+1][j-1]+a[i-1][j+1]);
		}
		} 
		for(i=1;i<10;i++)
		{
		for(j=1;j<10;j++)
		{
			a[i][j]+=b[i][j];
		}
	}
	}
   
	for(i=1;i<10;i++)
	{
		for(j=1;j<9;j++)
		{
	     printf("%d ",a[i][j]);
		}

	     printf("%d\n",a[i][j]);
	}
	return 0;
}