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
    int n,i,suma=0,sumb=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(b-a==1||b-a==-2)suma++;
        if(a-b==1||a-b==-2)sumb++;            
    }
    if(suma>sumb)printf("A");
    if(suma<sumb)printf("B");
    if(suma==sumb)printf("Tie");
}
