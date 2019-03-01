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
int n,a,b,c,t;
scanf("%d",&n);
t=1;
b=0;
c=0;
while(t<=n){
            scanf("%d",&a);
            if(a>=b){
                     c=b;
                     b=a;
                     t=t+1;
                     }
            else if((a<b)&&(a>=c)){
                 c=a;
                 t=t+1;
                 }
            else{
                 t=t+1;
                 }
                     
            }
            printf("%d\n%d",b,c);
            scanf("%d",&n);
            return 0;
            }
            
            