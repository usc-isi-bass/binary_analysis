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
      int x1,y1,x2,y2,i,j,m;
      scanf("%d%d",&x1,&y1);
      int a[x1][y1];
      for(i=0;i<x1;i++)
      for(j=0;j<y1;j++)
      scanf("%d",&a[i][j]);
      scanf("%d%d",&x2,&y2);
      int b[x2][y2];
      for(i=0;i<x2;i++)
      for(j=0;j<y2;j++)
      scanf("%d",&b[i][j]);
      int c[x1][y2];
      for(i=0;i<x1;i++)
      for(j=0;j<y2;j++)
      {    
           c[i][j]=0;
           for(m=0;m<y1;m++)
           c[i][j]=c[i][j]+a[i][m]*b[m][j];
           if(j!=y2-1)
           printf("%d ",c[i][j]);
           else
           printf("%d\n",c[i][j]);
      }                
 
}
    