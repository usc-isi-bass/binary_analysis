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
 int a[21],i,n,b[21];
 a[1]=1;
 a[2]=1;
 for(i=3;i<=20;i++)
 {
  a[i]=a[i-1]+a[i-2];                 
 }      
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  scanf("%d",&b[i]);                 
 }
 for(i=1;i<=(n-1);i++)
 {
  printf("%d\n",a[b[i]]);                
 }
 printf("%d",a[b[n]]);
}
