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
	int a[100];
	int i,j,h,t;
	scanf("%d\n",&h);
         for(i=0; i < 100; i ++)
             a[i] = 0;
	for(i=0;i<h;i++)
		scanf("%d",&a[i]);
	for(j=0;j<h;j++)
		for(i=0;i<h-j;i++)
			if(a[i]<a[i+1])
			{
			 t=a[i];
			 a[i]=a[i+1];
			 a[i+1]=t;
			}
    for(i=0;i<2;i++)
	printf("%d\n",a[i]);
	return 0;
}

