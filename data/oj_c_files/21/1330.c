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
    int n, i, j, num[1000], sum=0, t;
    double ans=0;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &num[i]);
        sum+=num[i];
    }
      ans=(double)sum/n;
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            if(num[j-1]>num[j]){
               t=num[j];
               num[j]=num[j-1];
               num[j-1]=t;}
          }
     }
    if(num[n-1]-ans==ans-num[0]){
       printf("%d,%d", num[0], num[n-1]);}
    else if(num[n-1]-ans>ans-num[0]){
       printf("%d", num[n-1]);}
    else if(num[n-1]-ans<ans-num[0]){
       printf("%d", num[0]);}
    return 0;
}
    