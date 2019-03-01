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
    int m;
    double sum;
    int num[10000]={0},n[200];
    int n1=1,n2=2,i,j;
    num[1]=n1;
    num[2]=n2;
    num[3]=n1+n2;
    num[4]=n2+num[3];
    scanf("%d",&m);
    for(i=1;i<=m;i++){
        scanf("%d",&n[i]);
    }
    for(i=1;i<=m;i++){
        sum=0;
        for(j=5;j<=n[i]+1;j++){
            num[j]=num[j-1]+num[j-2];
            }
        for(j=1;j<=n[i];j++){
            sum+=1.0*num[j+1]/num[j];
            }
        printf("%.3lf\n",sum);
    }
    return 0;
}
