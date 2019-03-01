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
    int n,i,j=0,k,a;
    int xy[101][2],xs[101]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&xy[i][0],&xy[i][1]);}
    for(i=0;i<n;i++){
        if(xy[i][0]>=90&&xy[i][0]<=140&&xy[i][1]>=60&&xy[i][1]<=90)
            xs[j]++;
        else j++;}
    for(i=1;i<=100;i++){
        for(k=0;k<=100-i;k++){
          if(xs[k]>xs[k+1]){
                            a=xs[k];
                            xs[k]=xs[k+1];
                            xs[k+1]=a;}}}
    printf("%d",xs[100]);
    
    return 0;
}
