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
 int n,i=3,a,b,x;
 scanf("%d%d%d",&n,&a,&b);
   
 
 while(i<=n)
 {
   scanf("%d",&x);
   
   if((a<x)&&(x<b))
   {
	   a=x;
   }
   else if(x>b)b=x;
   
   
   i++;
 
 }
 if(a<b)
 printf("%d\n%d",b,a);
 else printf("%d\n%d",a,b);
 return 0;
}