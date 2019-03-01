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
    int n,i,sou[max],su[max],a=0,h[max],m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&(sou[i]),&(su[i]));
    }
    for(i=0;i<n;i++)
    if((sou[i]>=90)&&(sou[i]<=140)&&(su[i]>=60)&&(su[i]<=90))
    {
        a++;
        h[i]=a;
    }else{
        h[i]=0;
        a=0;
    }
    m=h[0];
    for(i=0;i<n;i++)
    {
        if(m<h[i]){
            m=h[i];
        }
    }
    printf("%d",m);
    return 0;
}
