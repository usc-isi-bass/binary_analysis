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
    char a[50],b[50];
    int count[50];
    scanf("%s%s",a,b);
    int n=strlen(a);
    int m=strlen(b);
    int i,j,k=0,l,o,result;
    for(i=0;i<m;i++){
                     if(a[0]==b[i]){
                                    count[k]=i;
                                    k++;
                                    }
                     }
    for(o=0;o<k;o++){
                     l=0;
                     for(j=0;j<n;j++){
                                      if(a[j]==b[count[o]+j]){
                                                              l++;
                                                              }
                                      if(l==n-1){
                                                 printf("%d",count[o]);
                                                 result=1;
                                                 }
                                      }
                     if(result==1)
                     break;
                     }
    
    return 0;
}
                                    
