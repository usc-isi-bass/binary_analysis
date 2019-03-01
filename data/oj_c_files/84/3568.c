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
    int n,i,j,x,b,c,m;
    int a[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	scanf("%d",&a[i]);
    }
    
    b=0;
    
    for(x=1;x<=n;x++)
    {
    	if(b<=a[x])
    	 {
    	  b=a[x];
    	  m=x;
    	 }
    	else
    	b=b;
    }
    printf("%d\n",b);
   
    c=0;
    a[m]=0;
      for(x=1;x<=n;x++)
    {
    	if(c<=a[x])
    	c=a[x];
    	else
    	c=c;
    }
    printf("%d",c);
    
}