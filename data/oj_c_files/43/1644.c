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
	int panduan(int x);
    int m,i,j,a,b;
	scanf("%d",&m);
	for(i=3;i<=m/2;i=i+2)
	{
		j=m-i;
		a=panduan(i);
		b=panduan(j);
		if((a==1)&&(b==1))
			printf("%d %d\n",i,j);
	}
    return 0;
}
int panduan(int x)
{
	int i;
	for(i=3;i<x/2;i++)
		if(x%i==0)
		{
			return(0);break;
		}
	return(1);
}