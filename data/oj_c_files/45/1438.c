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
    char a[51]={0};
    char b[51]={0};
    scanf("%s %s",a,b);
    int len1=strlen(a);
    int len2=strlen(b);
    int i,j,k,m=0;
    for(i=0;i<=len2-len1;i++){
                             k=0;
                             for(j=i;j<i+len1;j++){
                                                 if(b[j]==a[j-i]){
                                                                k=k+1;
                                                                }
                                                                }
                             if(k==len1){
                                          m=i;
                                           break;}
                                           }
    printf("%d",m);
    return 0;
}
