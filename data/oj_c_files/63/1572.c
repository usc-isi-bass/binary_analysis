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
    int i,m,d;
    int x1,y1;
    scanf("%d %d\n",&x1,&y1);
    int a[1000][1000];
    for(i=1;i<=x1;i++)
    {
         for(m=1;m<=y1;m++)
         {
              scanf("%d",&a[i][m]);
         }
    }
     int x2,y2;
    scanf("%d %d\n",&x2,&y2);
    int b[1000][1000];
    for(i=1;i<=x2;i++)
    {
         for(m=1;m<=y2;m++)
         {
              scanf("%d",&b[i][m]);
         }
    }
    int c[1000][1000];
    for(i=1;i<=x1;i++)
    {
         for(m=1;m<=y2;m++)
         {
              c[i][m]=0;
              for(d=1;d<=y1;d++)
              {
                  c[i][m]=a[i][d]*b[d][m]+c[i][m];
                  if(d==y1){
                  if(m==y2)printf("%d\n",c[i][m]);
                  else printf("%d ",c[i][m]);}
              }
         }
    }
    return 0;
}
     
    
