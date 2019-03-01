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
    int a,b,c,d,e,f,s;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    while((a!=0)||(b!=0)||(c!=0)||(d!=0)||(e!=0)||(f!=0))
    {
        if(f>=c)
        {
            s=f-c;
            if(e>=b)
            {
                s+=(e-b)*60;
                s+=(d+12-a)*60*60;
            }
            else 
            {
                s+=(e+60-b)*60;
                s+=(d+11-a)*60*60;
            }
        }
        else
        {
            s=f-c+60;
            if((e-1)>=b)
            {
                s+=(e-b-1)*60;
                s+=(d+12-a)*60*60;
            }
            else
            {
                 s+=(e+60-b-1)*60;
                 s+=(d+11-a)*60*60;
            }
        }
        printf("%d\n",s);
        scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    }
    return 0;
}
