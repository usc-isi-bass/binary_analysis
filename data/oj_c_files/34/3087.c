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
    int i,j,k;
    scanf("%d",&i);
    if (i==1)
    printf("End");
    for (;i!=1;)
    {
    if  (i%2==0)
    {j=i/2;
    printf("%d/2=%d\n",i,j);}
    else
    {j=3*i+1;
    printf("%d*3+1=%d\n",i,j);}
    if (j==1)
    {printf("End");
    break;}
    else
    {
        if  (j%2==0)
    {i=j/2;
    printf("%d/2=%d\n",j,i);}
    else
    {i=3*j+1;
    printf("%d*3+1=%d\n",j,i);}
       if (i==1)
       {printf("End");
       break;}
    }
    }
}