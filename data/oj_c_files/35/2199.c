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
   int a[8][8],m,n,i,j,maxhang,hang,i1,flag=0;
   char c;
   scanf("%d %c %d",&m,&c,&n);
   for(i=0;i<=m-1;i++)
   for(j=0;j<=n-1;j++)
   scanf("%d",&a[i][j]);
   for(i=0;i<=m-1;i++)
   {
       flag=0;
        maxhang=0;
        hang=0;
        for(j=0;j<=n-1;j++)
            if(a[i][j]>maxhang)
            {
                maxhang=a[i][j];
                hang=j;
            }
        for(i1=0;i1<=m-1;i1++)
        {
            if(a[i1][hang]<maxhang)
            flag=1;
        }
        if(flag==0)
        {printf("%d+%d",i,hang);
        flag=2;
        break;}

   }
    if(flag!=2)
        printf("No");
return 0;
}
