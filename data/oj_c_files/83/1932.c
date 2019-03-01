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
    int n;
    double score[20];
    double mark[20];
    double ret=0.0;
    double sum1=0.0,sum2=0.0;
    
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&score[i]);
        sum1+=score[i];
    }
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&mark[i]);
        if(mark[i]>=90) {mark[i]=4.0;continue;}
        if(mark[i]>=85) {mark[i]=3.7;continue;}
        if(mark[i]>=82) {mark[i]=3.3;continue;}
        if(mark[i]>=78) {mark[i]=3.0;continue;}
        if(mark[i]>=75) {mark[i]=2.7;continue;}
        if(mark[i]>=72) {mark[i]=2.3;continue;}
        if(mark[i]>=68) {mark[i]=2.0;continue;}
        if(mark[i]>=64) {mark[i]=1.5;continue;}
        if(mark[i]>=60) {mark[i]=1.0;continue;}
        if(mark[i]<60) {mark[i]=0.0;continue;}
    }
    for(int i=0;i<n;i++)
    {
        sum2+=mark[i]*score[i];
    }
    ret=sum2/sum1;
    printf("%.2lf",ret);
    
    return 0;
}
