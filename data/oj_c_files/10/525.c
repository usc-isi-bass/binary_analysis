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

int N,input[26],i,j,k,ans[26],Max;
int cons(int i){
   int a=0;
   if(ans[i]!=0)
     return ans[i];
   for(int j=i+1;j<N;j++){
     if(input[j]<=input[i])   
        if(a<cons(j))
           a=ans[j];   
   }
   ans[i]=a+1;
   return ans[i];
}
int main(){
    Max=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
       scanf("%d",&input[i]);
       ans[i]=0;
    }
    for(i=N-1;i>=0;i--){
        if(Max<cons(i))           
           Max=ans[i];
    }           
    printf("%d\n",Max);
    return 0;    
}