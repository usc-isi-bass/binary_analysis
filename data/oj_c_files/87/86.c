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
 int a[100][6];
 int l;
 for(int i=0;;i++) 
  {
    for(int j=0;j<=5;j++)
     {
        scanf("%d",&a[i][j]);
     }
    if((a[i][0]==0)&&(a[i][1]==0)&&(a[i][2]==0)&&(a[i][3]==0)&&(a[i][4]==0)&&(a[i][5]==0))
    {l=i; break;}      
  }
 for(int i=0;i<=l-1;i++)
 {
   int xs,fz,miao;
   miao=a[i][5]-a[i][2]+60;
   fz=a[i][4]-a[i][1]+59;
   xs=a[i][3]-a[i][0]+11;
   int zsj=miao+60*fz+xs*3600;
   printf("%d\n",zsj);     
 }
 int y;scanf("%d",&y);
 return 0;   
}
