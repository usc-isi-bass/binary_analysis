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
  int i,j,n,k,a[1000];
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
        if(a[i]>k)
        continue;
        if(a[i]<=k)
        for(j=i+1;j<n;j++)
        {
                if(a[j]>k)
                continue;
                if(a[i]+a[j]==k)
                break;
        }
        if(j<n)
        {
             printf("yes");
             break;
        }
  }
  if(i==n)
  printf("no");	
  return 0;
}
