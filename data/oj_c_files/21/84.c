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
int i,n,a[305],sum,z;
int aver,x=0,y;
scanf("%d",&n);
for(i=0,sum=0;i<n;i++)
 {scanf("%d",&a[i]);sum+=a[i];}
aver=(sum+n-2)/n;
for(i=0;i<n;i++)
 {y=a[i]-aver;
 if(y<0) y=0-y;
 if(x<y) x=y;}
for(i=0;;i++){
  y=a[i]-aver;
  if(y==x||y==0-x) {printf("%d",a[i]),z=i;break;}
  else continue;}
for(i=z+1;i<n;i++){
 y=a[i]-aver;
 if(y==x||y==0-x) printf(",%d",a[i]);}
}

