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
    int sushu[10000];
    int n,i,j,k,x;
    scanf("%d",&n);
    sushu[0]=2;
    j=1;
    for(i=3;i<=n;i++)
    {
    x=0;
    for(k=2;k<i;k++)
      {
      if(i%k==0)
      x++;
      }
      if(x==0)
      {
      sushu[j]=i;
      j++;
      }
    }
     x=0;
     for(i=0;i<j;i++)
     {
     if(sushu[i]==sushu[i+1]-2)
     {
     printf("%d %d\n",sushu[i],sushu[i+1]);
     x++;
     }
    }
    if(x==0)
    printf("empty");
}