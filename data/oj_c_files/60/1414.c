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


int a(int x);
main()
{
int n,m,t;
scanf("%d",&n);
t=0;
for(m=3;m<=n-2;m=m+2)
{ 
if(a(m)==1&&a(m+2)==1)
{printf("%d %d\n",m,m+2);
t=1;
}
}
if(t==0)
printf("empty\n");


}





int a(int x)
{
int i;
for(i=2;i<x;i++)
if(x%i==0)
{ return(0);
break;
}
if(i==x)
return(1);
}
