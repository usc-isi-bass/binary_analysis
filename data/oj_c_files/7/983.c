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
    int i,j,k,l1,l2,l3,sum;
    char a[100],b[100],c[100];
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    sum=0;
    l1=strlen(b);
    l2=strlen(c);
    l3=strlen(a);
    for(i=0;i<l3;i++)
    {
        for(j=i,k=0;k<l1;k++)
        {
            if(a[j]!=b[k])
            break;
            j++;
        }
        if(k==l1&&sum==0)
        {
        for(j=0;c[j]!='\0';j++)
        printf("%c",c[j]);
        i=i+l1-1;
        sum=sum+1;
        }
        else
        printf("%c",a[i]);
    }
}