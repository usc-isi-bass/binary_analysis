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
{int a[100][2],n,i,j,kai;
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{scanf("%d",&a[i][0]);a[i][1]=0;}

for(i=0;i<=n-1;i++)
{
                   for(j=i+1;j<=n-1;j++)
                   if(a[i][0]==a[j][0])
                   a[j][1]=1;
}
for(i=0,kai=0;i<=n-1;i++)
{
                         if(a[i][1]==0&&kai==0)
                         {printf("%d",a[i][0]);kai=1;continue;}
                         if(a[i][1]==0&&kai==1)
                         printf(",%d",a[i][0]);
}

                       
   return 0;
}


