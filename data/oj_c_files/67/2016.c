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
    int n,i;
    scanf("%d",&n);
    double shu[100][2];
    scanf("%lf %lf",&shu[0][0],&shu[0][1]);
    double lv=shu[0][1]/shu[0][0];
    for(i=1;i<n;i++){scanf("%lf %lf",&shu[i][0],&shu[i][1]);if(shu[i][1]/shu[i][0]-lv>0.05){printf("better\n");}else if(lv-shu[i][1]/shu[i][0]>0.05){printf("worse\n");}else{printf("same\n");}}
    return 0;
}
    