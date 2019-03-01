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
    int n,i;
    float a[100],b[100],c[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
        scanf("%f",&b[i]);
        c[i]=b[i]/a[i];
    }
    for(i=1;i<n;i++)
    {
        if(c[i]-c[0]>0.05)
        printf("better");
        else if(c[i]-c[0]<-0.05)
        printf("worse");
        else
        printf("same");
        printf("\n");
    }
}