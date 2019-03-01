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

int know[10000],bknown[10000];
int main()
{
    int n,i,a,b;

    scanf("%d",&n);
    for(i=0;i<n;i++) know[i]=bknown[i]=0;
    while(scanf("%d%d",&a,&b))
    {
        if(a==b&&b==0) break;
        know[a]++;
        bknown[b]++;
    }
    for(i=0;i<n;i++)
        if(know[i]==0&&bknown[i]==n-1) break;
    if(i<=n) printf("%d\n",i);
    else printf("NOT FOUND\n");
    return 0;
}
