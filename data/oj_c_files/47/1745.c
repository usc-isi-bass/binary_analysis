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

void main()
{
    int i,temp,*p,*q,n,a[102];
    scanf("%d",&n);
    p=a;
    for(i=0;i<n;i++)
        scanf("%d",p++);
    p--;
    for(q=a;q-p<=0;q++,p--){
        temp=*q;
        *q=*p;
        *p=temp;
    }
    for(p=a;p<a+n;p++)
        printf("%d%c",*p,(p<a+n-1)? ' ':'\n');
}