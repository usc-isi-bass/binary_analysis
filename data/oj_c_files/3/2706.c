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
    int n,k;
    int c[1000];
    int i=0,j=0,A=0;
    scanf("%d%d",&n,&k);
    while(i<n)
    {
        scanf("%d",&c[i]);
        i++;
    }
    i=0;
    while(i<n)
    {
        j=i+1;
        while(j<n)
        {
            if(c[i]+c[j]==k) A=1;
            j++;
        }
        i++;
    }
    if(A==1) printf("yes");
    else printf("no");
    return 0;
}