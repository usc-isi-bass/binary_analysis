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
 int a,max,cmax;
 int i;
 int num[n];
 max=0;
 cmax=0;
 scanf("%d",&a);
 for(i=0;i<a;i++)
 {
 scanf("%d",&num[i]);
 }
 for(i=0;i<a;i++)
 {
 if(num[i]>max)
  {
  max=num[i];
  }
 }
 for(i=0;i<a;i++)
 {
 if(num[i]>cmax && num[i]<max)
  {
  cmax=num[i];
  }
 }
 
 printf("%d\n%d\n",max,cmax);
 
return 0;
}