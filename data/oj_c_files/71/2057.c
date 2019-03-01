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
  int n,i,j,a,x,y,z,b[12]={3,0,3,2,3,2,3,3,2,3,2,3};
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
     a=0;
     scanf("%d %d %d",&x,&y,&z);
     b[1]=0;
     if((x%4==0&&x%100!=0)||x%400==0)
     b[1]=1;
     if(y<z)
     {
        for(j=y;j<z;j++)
           a+=b[j-1];
     }
     if(z<y)
     {
        for(j=z;j<y;j++)
           a+=b[j-1];
     }
     if(a%7==0)
     printf("YES\n");
     else
     printf("NO\n");
  }

  return 0;
}
