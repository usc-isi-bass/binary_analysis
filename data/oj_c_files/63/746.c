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
         int x1,y1,x2,y2,i=0,j=0,b=0,k=0;
         cin>>x1>>y1;
         int jua[x1][y1];
         for(i=0;i<x1;i++)
                 for(j=0;j<y1;j++)
                         cin>>jua[i][j];
         cin>>x2>>y2;
         int jub[x2][y2];
         for(i=0;i<x2;i++)
                 for(j=0;j<y2;j++)
                         cin>>jub[i][j];
         int juc[x1][y2];
         for(i=0;i<x1;i++)
                for(j=0;j<y2;j++)
                         juc[i][j]=0;
         for(i=0;i<x1;i++)
                 for(j=0;j<y2;j++)
                 {
                                for(k=0;k<y1;k++)
                                juc[i][j]+=jua[i][k]*jub[k][j];
                 }
         for(i=0;i<x1;i++)
         {
                          b=0;
                          for(j=0;j<y2;j++)
                          {
                                           if(b==y2-1)
                                           cout<<juc[i][j]<<endl;
                                           else  {cout<<juc[i][j]<<' ';  b++;}
                          }
         }  
      
return 0;
}
