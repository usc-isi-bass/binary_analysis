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
      int n,g,i,j,k,yy,a,b;
      int c[100],d[100];
      c[1]=1;
      c[2]=c[1]+31;
      c[3]=c[2]+29;
      c[4]=c[3]+31;
      c[5]=c[4]+30;
      c[6]=c[5]+31;
      c[7]=c[6]+30;
      c[8]=c[7]+31;
      c[9]=c[8]+31;
      c[10]=c[9]+30;
      c[11]=c[10]+31;
      c[12]=c[11]+30;
      d[1]=1;
      d[2]=d[1]+31;
      d[3]=d[2]+28;
      d[4]=d[3]+31;
      d[5]=d[4]+30;
      d[6]=d[5]+31;
      d[7]=d[6]+30;
      d[8]=d[7]+31;
      d[9]=d[8]+31;
      d[10]=d[9]+30;
      d[11]=d[10]+31;
      d[12]=d[11]+30;    
      scanf("%d",&n);
      for(g=0;g<n;g++)
      {
                      scanf("%d %d %d",&yy,&a,&b);
                      if(yy%400==0||(yy%100!=0&&yy%4==0))
                      {
                                                         if((c[a]-c[b])%7==0||(c[b]-c[a])%7==0)
                                                         {
                                                                                               printf("YES");
                                                         }
                                                         else printf("NO");
                      }
                      else
                      {
                          if((d[a]-d[b])%7==0||(d[b]-d[a])%7==0) printf("YES");
                          else printf("NO");
                      }
                      printf("\n");
      }
      
}
