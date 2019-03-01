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
  int a[2][13]= {0,31,28,31,30,31,30,31,31,30,31,30,31,0,31,29,31,30,31,30,31,31,30,31,30,31};
  int y,m,i,d,s=0;
  scanf("%d %d %d",&y,&m,&d);
  if(y%400==0||(y%100!=0&&y%4==0))
   {
    for(i=0;i<m;i++)
      s+=a[1][i];
      s+=d;
   }
  else
   {
     for(i=0;i<m;i++)
      s+=a[0][i];
      s+=d;
    }
  printf("%d",s);
  return 0;
}