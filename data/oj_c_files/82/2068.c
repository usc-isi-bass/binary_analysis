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
    int n,p[N],q[N],i,j,s,x,y;
    x=0;y=0;s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){scanf("%d%d",&p[i],&q[i]);}
    for(i=0;i<n;i++)
        {
            if(p[i]>=90&&p[i]<=140&&q[i]>=60&&q[i]<=90)
                {x=x+1;if(x>s){s=x;}}
            else
                {x=0;}
        }
    printf("%d",s);
    return 0;
}
