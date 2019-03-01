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
    int k;
    scanf("%d",&k);
    int i,j,h[26],amount[26],s=0;
    for(i=0;i<k;i++)
    {
      scanf("%d",&h[i]);
      amount[i]=1;
    }
    for(i=k-2;i>=0;i--)
    {
      for(j=i+1;j<k;j++)
      {
        if((h[i]>=h[j])&&(amount[i]<amount[j]+1))
          amount[i]=amount[j]+1;
      }
    }
    for(i=0;i<k;i++)
    {
      if(amount[i]>s)
        s=amount[i];
    }
    printf("%d\n",s);
  return 0;
}