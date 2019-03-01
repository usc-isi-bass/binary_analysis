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
int n,i,j,k,f,g,d;
scanf("%d",&n);
for(i=2;i<=(n/2);i++)
{
  f=0;d=0;
  j=n-i;
  for(k=2;k<i;k++)
  {if(i%k==0) {f=0;break;}
  else f=1;}
  for(g=2;g<j;g++)
  {if(j%g==0) {d=0;break;}
  else d=1;}
  if(d==1&&f==1) printf("%d %d\n",i,j);
}

return 0;
}
