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

int abs(int p)
{
  if(p>0) return p;
  else return(-p);
}
int main()
{
  long first,last,i,j;
  int n,a,check=0,sc,sr,ec,er;
  scanf("%d",&n);
  for(i=0;i<n*n;i++)
  {
    scanf("%d",&a);
    if((a==0)&&(check==0)) {first=i;check=1;}
    if(a==0) last=i;
  }
  sc=(first/n);
  sr=(first%n);
  ec=(last/n);
  er=(last%n);
  printf("%d",(abs(sc-ec)-1)*(abs(sr-er)-1));
  return 0;
}