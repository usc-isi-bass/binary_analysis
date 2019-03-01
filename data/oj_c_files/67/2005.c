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

struct jiegou
{
       double renshu;
       double youxiao;
       };
int main()
{
    int n;
    scanf("%d",&n);
    struct jiegou abc[20];
    int i=0;
    for(i=0;i<n;i++){
                     scanf("%lf%lf",&abc[i].renshu,&abc[i].youxiao);
                     }
                     
    for(i=1;i<n;i++){
                                          if((abc[0].youxiao/abc[0].renshu)<(abc[i].youxiao/abc[i].renshu-0.05))   printf("better\n");
                                          else if((abc[0].youxiao/abc[0].renshu)>(abc[i].youxiao/abc[i].renshu+0.05))   printf("worse\n");
                                          else printf("same\n");
                                          }
                                          
                                          return 0;
                                          }

