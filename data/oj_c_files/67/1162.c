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

int main(){
int n;
scanf("%d",&n);
double chu1,chu2;
scanf("%lf%lf",&chu1,&chu2);
int i;
double bi1[100],bi2[100];
for(i=0;i<n-1;i++)
{
    scanf("%lf%lf",&bi1[i],&bi2[i]);
}

for(i=0;i<n-1;i++)
{

    if(chu2/chu1-bi2[i]/bi1[i]>0.05)

        printf("worse\n");
    else if(bi2[i]/bi1[i]-chu2/chu1>0.05)
        printf("better\n");
    else 
        printf("same\n");
}
return 0;
}
