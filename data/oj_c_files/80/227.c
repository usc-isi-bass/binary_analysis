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
    long int x[2][4];
    int i,y,m,d,minus;
    for(i=0;i<=1;i++)
    {
                scanf("%d%d%d",&x[i][0],&x[i][1],&x[i][2]);    
                y=x[i][0];
                m=x[i][1];
                d=x[i][2];
            if(y%4==0&&y%100!=0||y%400==0)
            {
                                                  if(m<=2)    x[i][3]=(y-1)/4*1461+(y-1)%4*365-(y-1)/100+(y-1)/400+(m-1)*31+d;
                                                  else if(m<=8) x[i][3]=(y-1)/4*1461+(y-1)%4*365-(y-1)/100+(y-1)/400+(m-1)/2*61+(m-1)%2*31-1+d;
                                                  else  x[i][3]=(y-1)/4*1461+(y-1)%4*365-(y-1)/100+(y-1)/400+213+(m-8)/2*61+(m-8)%2*31+d;
                                                      }
                                                      else 
                                                      {
                                                            if(m<=2)    x[i][3]=(y-1)/4*1461+(y-1)%4*365-(y-1)/100+(y-1)/400+(m-1)*31+d;
                                                  else if(m<=8) x[i][3]=(y-1)/4*1461+(y-1)%4*365-(y-1)/100+(y-1)/400+(m-1)/2*61+(m-1)%2*31-2+d;
                                                  else  x[i][3]=(y-1)/4*1461+(y-1)%4*365-(y-1)/100+(y-1)/400+212+(m-8)/2*61+(m-8)%2*31+d;
                                                           }
                     }
                     minus=abs(x[0][3]-x[1][3]);
                     printf("%d\n",minus);
return 0;
}