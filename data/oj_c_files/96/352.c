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
    char s[101];
    int lenth,b,c,i,a[101];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        a[i]=s[i]-'0';

    }
    lenth=i;
    for(i=0;i<lenth;i++)
    {
       b=a[i]/13;
       if(lenth==1)
       printf("%d",b);
       else if(lenth==2&&a[i]*10+a[i+1]<13)
       printf("%d",b);
       else if(!((b==0)&&((i==1)||(i==0))))
       printf("%d",b);
       c=a[i]%13;
       a[i+1]=a[i+1]+10*c;


    }
    printf("\n");
    printf("%d",c);
}