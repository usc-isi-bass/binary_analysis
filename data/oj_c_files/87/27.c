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

int second(int a, int b, int c, int d, int e, int f)
{
  int i, sum;
  d = d + 12;
  sum = (d - a)*3600 + (e-b)*60 + f - c;
  return sum;
}

int main()
{
  int a[1000][6];
  int i, j=0, m=0;
  do
  {
    for(i = 0; i < 6; i++)
    {
      scanf("%d", &a[j][i]);
      if(a[j][i]==0)
          m++;
    }
    j++;
  }
  while(m < 6);
  
  for(i = 0; i < j-1; i++)
    printf("%d\n", second(a[i][0],a[i][1],a[i][2],a[i][3],a[i][4],a[i][5]));

  return 0;
}