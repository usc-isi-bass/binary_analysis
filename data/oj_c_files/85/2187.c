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
    int i,j,n,a=1;
    char s[MAX+1];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",s);
        for(j=0;s[j];j++){
            if((s[j]=='_')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z')||(s[j]>='0'&&s[j]<='9'&&j>0)){
                continue;
             a=1;}
            else{    
                a=0;
                break;
            }
            
            }
        if(a==0){
             printf("no\n");
            }
        else if(a==1){
             printf("yes\n");
  }    a=1;
        }  
        return 0;
    }


