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
    int *a=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
       }
    int k;
    scanf("%d",&k);
    int s=0;
    if(a[n-1]==k){
       a[n-1]=k+1;
       s=s+1;
       }
       
    for(int j=0;j<n;j++){
        if(a[j]==k){
           int p=j;
           while(p<n-1){
                a[p]=a[p+1];
                p++;
                }
           s=s+1;
           j=j-1;        
           }
        }
        
    for(int q=0;q<n-s;q++){
        
        if(q==0){
           printf("%d",a[q]);  
        }else{
           printf(" %d",a[q]);   
        }
    }
    return 0;
}
