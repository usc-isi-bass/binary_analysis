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

int main(){
    int i;
    for(i=0;i<100000;i++){
       int a,b,c,d,e,f,g;
       scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
       if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)break;
       g=3600*(12+d-a)+60*(e-b)+(f-c);
       printf("%d\n",g);
       }
    scanf("%d",&i);
    return 0;
}
