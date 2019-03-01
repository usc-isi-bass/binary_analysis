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
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i,t,w,x;
    scanf("%d",&w);
    for(i=1;i<12;i++)
    {
        a[i]=a[i-1]+a[i];              
    }
    x=13-w;
    if(13-x==7)  printf("1\n");
    for(i=1;i<12;i++)
    {
            if((a[i-1]+13-x)%7==0)
            printf("%d\n",i+1);                     
    }
   
}
