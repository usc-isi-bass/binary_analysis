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
    int n,i,l,sum;
    char s[220];

    scanf("%d",&n);
    sum=0;
    for (i=0;i<n;i++)
    {
        scanf("%s",s);
        l=strlen(s);
        if (sum==0) {printf("%s",s);sum=l;}
        else if (sum+1+l>80) {printf("\n%s",s);sum=l;}
        else {printf(" %s",s);sum=sum+1+l;}
    }
    return 0;
}
