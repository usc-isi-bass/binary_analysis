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

main()
{
int x,y,i,j,m,n;
static int a[16];
static int b[16];
a[0]=10000;
b[0]=20000;
scanf("%d %d",&x,&y);
a[1]=x;
b[1]=y;
for(i=2;x>1;i++)
  { a[i]=x/2;
   x=x/2;}
m=i-1;
for(j=2;y>1;j++)
  { b[j]=y/2;
    y=y/2;}
n=j-1;
do{
    if(a[m]==b[n])
     m--;
     n--;
   }while(a[m]==b[n]);
printf("%d",a[m+1]);
}

  
   
   