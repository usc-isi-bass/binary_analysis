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
 int n,i,a[100],j,k,b;
 scanf("%d",&n);
 for(i=0;i<=(n-1);i++)
 {
	 scanf("%d",&a[i]);
 }
 for(j=0;j<=(n-1);j++)
 {
	 for(k=0;k<(n-1-j);k++)
	 {
        if(a[k]<a[k+1])      
		{b=a[k];
	   a[k]=a[k+1];
	   a[k+1]=b;}
	 }
 }

printf("%d\n%d\n",a[0],a[1]);
}