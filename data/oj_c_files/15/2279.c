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

main()
{   
    int n,i,a,x,y;
    scanf("%d",&n);
    for(i=1;i<=n*n;i++)    {scanf("%d",&a);if(a==0) {x=i;break;}
    }
    for(i=x+1;i<=n*n;i++)
    {scanf("%d",&a);if(a==0) y=i;}
    printf("%d",(y/n-x/n-1)*(y%n-x%n-1));
    
    return 0;
}

