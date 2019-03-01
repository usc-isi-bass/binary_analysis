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
  int i,n,x,y,t=0;
  int a[10000],b[10000];
  scanf("%d",&n);
  while(scanf("%d %d",&x,&y)==2)
  {
    if(x==0&&y==0)
      break;
    else
      a[x]++;
      b[y]++;
      }
  for(i=0;i<n;i++)
  {
    if (a[i]==0&&b[i]==n-1)
      printf("%d",i);
      t++;
      }
  if(t==0)
    printf("NOT FOUND");
  getchar();
  getchar();
  getchar();
  return 0;
}