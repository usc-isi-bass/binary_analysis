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
    int n,sz[100],sum=0;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
    if(i%10!=7&&i%7!=0&&(i<70||i>79))
    sum=sum+i*i;
    }
    printf("%d",sum);
    return 0;
}