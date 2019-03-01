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
int s[300],n,i,k,c[300]={1000},q;
scanf("%d",&n);
getchar();
for(i=0;i<n;i++){
scanf("%d",&s[i]);
c[i]=0;
}
for(i=0;i<n;i++){
    for(k=i+1;k<n;k++){
         if(s[i]==s[k]){
            c[k]+=1;
            }
            }
            }
for(i=0;i<n;i++){
    if(c[i]==0){
       q=i;
       }
       }                     
for(i=0;i<q;i++){
    if(c[i]==0){
       printf("%d,",s[i]);
       getchar();
       }
       }                                  
printf("%d",s[q]);
getchar();
 return 0;
}     