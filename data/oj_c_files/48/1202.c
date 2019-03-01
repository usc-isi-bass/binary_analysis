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
  int m,n,i,p,q;
  int a[11][11]={0};
  int b[11][11];
  scanf("%d %d",&m,&n);
  a[5][5]=m;
  for (i=0;i<n;i++)
  {
    for (p=0;p<11;p++)
    {
      for (q=0;q<11;q++)
        b[p][q]=a[p][q];
    }
    for (p=1;p<10;p++)
    {
      for (q=1;q<10;q++)
        a[p][q]=2*b[p][q]+b[p-1][q]+b[p-1][q-1]+b[p][q-1]+b[p+1][q]+b[p][q+1]+b[p+1][q+1]+b[p+1][q-1]+b[p-1][q+1];
    }
  }
  for (p=1;p<10;p++)
  {
    for (q=1;q<10;q++)
    { 
      if (q<9)
        printf ("%d ",a[p][q]);
      if (q==9)
        printf ("%d\n",a[p][q]);
    }
  }
}   
     