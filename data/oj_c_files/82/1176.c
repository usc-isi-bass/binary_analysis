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
    int a[100],b[100];
    int n,k=0,i,max=0;
    int shuzu[100]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     scanf("%d %d",&a[i],&b[i]);
                     }
    for(i=0;i<n;i++){
                     if(a[i]<=140&&a[i]>=90&&b[i]>=60&&b[i]<=90){
                                                                k++;
                                                                shuzu[i]=k;
                     }else{
                           k=0;
                           }
    }
    for(i=0;i<n;i++){
                     if(shuzu[i]>max){
                                      max=shuzu[i];
                                      }
                     }
    printf("%d",max);
    return 0;
}
