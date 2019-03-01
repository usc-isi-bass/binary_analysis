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
    int i=1,n,k,m,j;
	scanf("%d %d",&n,&k);
    j=1;
abc: 
	m=j*n+k;
def:
	if(m%(n-1)==0&&i<n)
    {
	  m=m/(n-1)*n+k;
	  i=i+1;
	goto def;
	}
	if(m%(n-1)&&i<n)
	{
		i=1;
		j=j+1;
	goto abc;
	}
	if(i==n)
		printf("%d",m);

}