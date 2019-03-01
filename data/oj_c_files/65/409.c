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

int cai(int a,int b)
{
    if(a==b)
    return 2;
    if(a==0&&b==1)
    return 1;
    if(a==0&&b==2)
    return 0;
    if(a==1&&b==0)
    return 0;
    if(a==1&&b==2)
    return 1;
    if(a==2&&b==0)
    return 1;
    if(a==2&&b==1)
    return 0;
}
main()
{
      int n;
      scanf("%d",&n);
      int a[200],b[200];
      int i,j,k;
      j=0;k=0;
      for(i=0;i<n;i++)
      scanf("%d %d",&a[i],&b[i]);
      for(i=0;i<n;i++)
      {
                      if(cai(a[i],b[i])==1)
                      j++;
                      if(cai(a[i],b[i])==0)
                      k++;
      }
      if(j==k)
      printf("Tie");
      else if(j>k)
      printf("A");
      else
      printf("B");
      }
