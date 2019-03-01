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
int n,i,j=0,k;
long int m,temp;
scanf("%d %d",&n,&k);
loop:{
 i=1;
 j=j+1;
 m=n*j+k;
 do
 {
 if(m%(n-1)==0)
 {
 m=m/(n-1)*n+k;
 i++;
 }
 else
 {
 goto loop;
 }
 }
 while (i<n);
 printf("%ld\n",m);
 }
}
