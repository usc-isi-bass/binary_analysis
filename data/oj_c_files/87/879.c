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
    int a,b,c,d,e,f,_a,_b,_c,_d,_e,_f,i,j,k,s,x,y;
    for(;1;)
    {
        scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
        if(a==0&&b==0&c==0&d==0&e==0&f==0)
            return 0;
        x=a*60*60+b*60+c;
        y=d*60*60+e*60+f;
        s=q-x+y;
        printf("%d\n",s);
    }
    
}
