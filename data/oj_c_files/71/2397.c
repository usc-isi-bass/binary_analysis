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
      int n,y,x;
      scanf("%d",&n); 
      int s[12]={0};
      for(int i=0;i<n;i++)
      {
              int a,b,c,z=0;
              scanf("%d %d %d",&a,&b,&c);
              if((a%400==0)||(a%100!=0&&a%4==0))
              { 
                     s[0]=31;
                      s[1]=29; 
                      s[2]=31;
                       s[3]=30; 
                       s[4]=31; 
                       s[5]=30;
                        s[6]=31;
                         s[7]=31;
                          s[8]=30;
                           s[9]=31;
                            s[10]=30;
                             s[11]=31;                      
              }
              else 
              { 
                     s[0]=31;
                      s[1]=28; 
                      s[2]=31;
                       s[3]=30; 
                       s[4]=31; 
                       s[5]=30;
                        s[6]=31;
                         s[7]=31;
                          s[8]=30;
                           s[9]=31;
                            s[10]=30;
                             s[11]=31;                      
              }         
              y=(b>c)?b:c;
              x=(b<c)?b:c;
              for(int j=x;j<y;j++)
              {
                      z+=s[j-1];
              } 
              if(z%7==0) 
              printf("YES\n");
              else
              printf("NO\n");      
      }
      getchar();
      getchar();
}
