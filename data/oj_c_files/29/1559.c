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
    int m;                          //??m
    cin>>m;                        //??m
    int n[100];                    //????n
    int i,j;                       //??i,j
    double a=1,b=2,c,t,s=0;         //??a,b,c,t,s
    for(i=0;i<m;i++)
    {
        cin>>n[i];                 //????n
    for(j=0;j<n[i];j++)
    {
        c=b/a;
        s=s+c;
        t=b;
        b=a+b;
        a=t;                     //??s
    }
        printf("%.3lf\n",s);        //??s
        s=0;
        a=1;
        b=2;                       //s??
    }
    return 0;
}
