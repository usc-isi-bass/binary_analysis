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
    int f(int m,int n);
    int a[20],b[20],t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    scanf("%d %d",&a[i],&b[i]);
    for(i=0;i<t;i++)
		printf("%d\n",f(a[i],b[i]));
    return 0;
}
    int f(int m,int n)
 {
     int c;
    if(m!=1&&n==1) c=1;
	else if(m==1&&n!=1) c=1;
      else if(m==1&&n==1)c=1;
	  else if(m>n) c=f(m-n,n)+f(m,n-1);
	  else if(m==n) c=1+f(m,n-1);
	  else if(m<n) c=f(m,m);
     return(c);
}
    
        