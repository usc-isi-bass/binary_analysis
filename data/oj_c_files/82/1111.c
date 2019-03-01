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
int a,b,n,i,j,max=0;
scanf("%d",&n);
int c[n],num[n];
for(i=0;i<n;i++){
    scanf("%d%d",&a,&b);
    if((a>=90 && a<=140) && (b<=90 && b>=60)){
    c[i]=1;
    }
    else c[i]=0;
}
for(i=0;i<n;i++){
    num[i]=0;
    if(c[i]==1){
        for(j=i;j<n;j++){
            if(c[j]==1){
                num[i]++;}
                else break;
        }
        }
            }
            for(i=0;i<n;i++){
                if(num[i]>max){
                    max=num[i];
                }
            }
            printf("%d",max);
    return 0;
}
