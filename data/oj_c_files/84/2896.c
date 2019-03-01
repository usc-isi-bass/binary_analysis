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

    int n,i,m,a,p,q,b;

    scanf("%d",&n);

    scanf("%d",&p);

    scanf("%d",&q);

    if(p>q){

       a=p;

b=q;

    }

    else if(p<=q){

       a=q;

       b=p;

    }

    i=3;

    while(i<=n){

    scanf("%d",&m);

    if(m>a){

       b=a;

       a=m;

    }

else if(m>b){

       b=m;

    }

    i++;

    }

    printf("%d\n%d\n",a,b);

    return 0;

}
