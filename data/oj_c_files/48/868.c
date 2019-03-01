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

int a[10][10];
int b[10][10];
int n;
void inf(int m)
{
  int i,j;
  for(i = 1;i <= 9;i++)     
     for(j = 1;j <= 9;j++)
     {
        b[i][j] = 2*a[i][j]+a[i][j+1]+a[i+1][j]+a[i][j-1]+a[i-1][j]+a[i+1][j+1]+a[i-1][j-1]+a[i+1][j-1]+a[i-1][j+1];
     }
  for(i = 1;i <= 9;i++)     
     for(j = 1;j <= 9;j++)
        a[i][j] = b[i][j];
   if(m < n) inf(m+1);
}
int main()
{
  int i,j;
  scanf("%d%d",&a[5][5],&n);
  inf(1); 
  for(i = 1;i <= 9;i++)
  {     
     for(j = 1;j <= 8;j++)
        printf("%d ",a[i][j]);
     printf("%d\n",a[i][9]);
  }
  return 0;    
}
