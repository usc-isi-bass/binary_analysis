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

main()
{
      int n;
      int i,j,x=0,y=0;
      scanf("%d",&n);
      int a[200][2]={10};
      for(j=0;j<n;j++)
      {
           scanf("%d",&a[j][0]);     
           scanf("%d",&a[j][1]);       
      }
      for(i=0;i<n;i++)
      {
           if (a[i][0]==0&&a[i][1]==1)   x++;
           if (a[i][0]==1&&a[i][1]==0)   y++;
           if (a[i][0]==0&&a[i][1]==2)   y++;
           if (a[i][0]==2&&a[i][1]==0)   x++;
           if (a[i][0]==1&&a[i][1]==2)   x++;
           if (a[i][0]==2&&a[i][1]==1)   y++;
           if (a[i][0]==a[i][1]&&a[i][0]<10) ;
      }
      if (x>y)
      printf("A");
      if (x==y)
       printf("Tie");
      if(x<y)
       printf("B");
      printf("\n");
}