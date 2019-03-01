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

int feibonaqi(int a)
{
  int i,sz[21];
  sz[0]=1;
  sz[1]=1;
  for(i=2;i<a;i++)
  {
    sz[i]=sz[i-1]+sz[i-2];
  }
  return sz[a-1];
 } 

int feibonaqi(int a);    
int main()
{
  int n,result[21],i,a;
  scanf("%d", &n);
  for(i=0;i<n;i++)
  {
    scanf("%d", &a);
    result[i]=feibonaqi(a);
  }
  for(i=0;i<n;i++)
  {
    printf("%d\n", result[i]);
  }
scanf(" ");
return 0;
}