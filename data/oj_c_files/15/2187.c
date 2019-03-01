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
int n,i,j,tem,a,b,count=0,tr=0,s=0;
scanf("%d",&n);
for(j=0;j<n;j++)
{
  for(i=0;i<n;i++) 
{
  scanf("%d",&tem);
  if(tem==255 && tr==1) tr=2;
  else if(tem==0 && tr==0) {s++;tr=1;}
  else if(tem==0 && tr==1) s++;
  if(tem==0) count++;
}
if(tr==1) tr=2;
}
printf("%d",((count-2*s)/2)*(s-2));
}