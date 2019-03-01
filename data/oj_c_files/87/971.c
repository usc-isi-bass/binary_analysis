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
    int a,b,c,d,e,f,t,h,m,s,i;
    for(i=0;i<100;i++){
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
                     if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
                                                            break;
                                                            }
                     d=d+12;
                     if(f<c){
                             f=60+f;
                             e=e-1;
                             }
                             if(e<b){
                                     e=60+e;
                                     d=d-1;
                                     }
                                     h=d-a;
                                     m=e-b;
                                     s=f-c;
                                     t=3600*h+60*m+s;
                                     printf("%d\n",t);
}

  return 0;
}
