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

int main(int argc, char *argv[])
{
  int n,k,i=0,j,x=0;
  scanf("%d%d",&n,&k);
  int a[n];
  for(;i<=n-1;i++)
  {scanf("%d",a+i);
  for(j=0;j<=i-1;j++)
  if(a[i]+a[j]==k) {x=1;break;}
  if(x==1) {printf("yes");break;}
  }
  if(x==0) printf("no");
  return 0;
}
