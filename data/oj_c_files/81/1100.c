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

int f(int a[5][5],int m,int n)
{
  int i,temp;
  if(n>4||m>4) return 0;
  else 
  for(i=0;i<5;i++)
  {
    temp=a[m][i];
    a[m][i]=a[n][i];
    a[n][i]=temp;
  }
  return 1;
}
 int main()
 {
     int m,n,a[5][5],k,i,j;
     for(i=0;i<5;i++)
     for(j=0;j<5;j++)
     scanf("%d",&a[i][j]);
     scanf("%d%d",&m,&n);
     k=f(a,m,n);
     if(k==0)
     printf("error\n");
     if(k==1)
      for(i=0;i<5;i++)
       for(j=0;j<5;j++)
     {
       if(j<4)
       printf("%d ",a[i][j]);
       if(j==4)
       printf("%d\n",a[i][j]);
       }
       return 0;
 }
