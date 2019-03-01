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
    double f[100];
    double sum=0.0,a=0.0,s=0.0,S;
    int k;
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        int n;
        scanf("%d",&n);
        for(int j=0;j<n;j++){
        scanf("%lf",&(f[j]));
        sum+=f[j];
        }
        a=sum*1.0/n;
        for(int j=0;j<n;j++){
        s+=pow(f[j]-a,2);
        }
        S=pow(s*1.0/n,1.0/2);
        printf("%.5lf\n",S);
        sum=0.0;
        s=0.0;

        } 
return 0;
}