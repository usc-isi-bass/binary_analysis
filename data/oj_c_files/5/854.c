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
    double a,b;
    char s[501],d[501];
    int n,m,i,j,p=0,q;
    scanf("%lf\n%s\n%s\n",&a,s,d);
    n=strlen(s);
    m=strlen(d);
    if(n!=m){
        printf("error");
    }
    else if(n==m){
        for(i=0;i<n-1;i++){
            if(s[i]!='A'&&s[i]!='G'&&s[i]!='C'&&s[i]!='T')
               {q=0;
                break;}
            else if(s[i]==d[i])
               {p++;}
            else if(s[i]!=d[i])
               {p=p+0;}
        }
        b=1.0*p/(n-1);
        if(b>a&&q!=0){printf("yes");}
        else if(b<a&&q!=0){printf("no");}
        else if(q==0){printf("error");}
    }
    return 0;
}

