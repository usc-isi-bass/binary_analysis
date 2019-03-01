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
    int a[300]={0},i=1,j,f=0,s=0;
    for(j=0;scanf("%d",&a[j]);++j)
        if(getchar()=='\n')break;
    for(;j>=0;j--)
        if(a[j]>f){s=f;f=a[j];}
        else if(a[j]<f&&a[j]>s)s=a[j];
    if(f==s||s==0)printf("No");
        else printf("%d",s);
    return 0;
}