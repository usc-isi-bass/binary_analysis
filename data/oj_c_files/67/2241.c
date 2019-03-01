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

    float c[1000];
    int n,i,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {scanf("%d%d",&b,&a);c[i-1]=(float)a/b;}
    for(i=1;i<=n-1;i++)
    {if(c[i]-c[0]>0.05) printf("better\n");
    else if(c[0]-c[i]>0.05) printf("worse\n"); 
    else  printf("same\n");
    
    
    }


    return 0;
}
