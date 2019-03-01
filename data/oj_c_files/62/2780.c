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
    int n,i,j,c=0;
    char s1[500];
    char s2[500];
    gets(s1);
    n=strlen(s1);
    int a[500]={0};
    for(i=n-1;i>=0;i--){
         if(s1[i]==' '){
                if(s1[i-1]==' '){
                        a[i-1]=a[i]+1;
                        c++;
                        }
                }
         }
    for(i=0,j=0;i<n;i++,j++){
         if(a[i]!=0){
                i=i+a[i];
                }
         s2[j]=s1[i];       
         }
    s2[n-c]='\0';
    printf("%s",s2);
    return 0;
}
                       
