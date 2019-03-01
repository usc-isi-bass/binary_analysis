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
    int sz[1000];
    int i,m,n,k,a;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&(sz[i]));
    }
    for(i=0;i<n;i++){
        a=k-sz[i];
        for(m=0;m<n;m++){
        if(sz[m]==a&&m!=i)
        {printf("yes");goto L;}} 
    }
        printf("no");
        L:
    return 0;
}


