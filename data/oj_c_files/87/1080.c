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
    int a,b,c,d,e,f,g,h;
    while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f)&&a!=0){
    h=60*60*(12+d-a)+60*(e-b)+f-c;
    if(a==0){}
    else{printf("%d\n",h);}
    }
    return 0;
}

