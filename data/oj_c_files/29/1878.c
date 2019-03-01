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
	int m,i,j,e;
	int a[100];
	float s,q,w;
	scanf("%d",&m);
	for (i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
		q=2,w=1,s=0;
	    for (j=1;j<=a[i];j++)
		{
		  s+=q/w;
		  e=q;
	   	  q=q+w;
	   	  w=e;
		}
		printf("%.3f\n",s);
	}
    return 0;
}
