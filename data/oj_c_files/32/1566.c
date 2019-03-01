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


void main()
{
	struct num
	{
	    char a[100],b[100];
	}jian[100];
	int n,j,i,m,l,p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%s %s",jian[i].a,jian[i].b);
     m=strlen(jian[i].a);
	 l=strlen(jian[i].b);
	 for(j=m-1,p=l-1;j>=m-l,p>=0;j--,p--)
	 {
			jian[i].a[j]=48+jian[i].a[j]-jian[i].b[p];
		 if (jian[i].a[j] <48)
		 {
			 jian[i].a[j] +=10;
			jian[i].a[j-1]--;
		}
	 }
	}
	for(i=0;i<n;i++)
		printf("%s\n",jian[i].a);
}
