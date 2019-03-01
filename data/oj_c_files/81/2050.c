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
    int a[5][5];
    int m,n,i,j,temp;
    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    scanf("%d",&a[i][j]);
    scanf("%d %d",&n,&m);
    if(m>4||n>4)
    printf("error");
    else
    {
        for(j=0;j<5;j++)
        {
          temp=a[m][j];
          a[m][j]=a[n][j];
          a[n][j]=temp;
          }
    for(i=0;i<=4;i++)
    {for(j=0;j<=3;j++)
     printf("%d ",a[i][j]);
     printf("%d\n",a[i][4]);
     }
     }
}
