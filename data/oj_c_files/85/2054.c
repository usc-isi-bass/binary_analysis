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
    int a[100]={0};
    scanf("%d\n",&n);
    char bsf[n][21];
    for (int i=0;i<n;i++){
        scanf("%s",(bsf[i]));
    }
    for (int i=0;i<n;i++){
        for(int m=0;bsf[i][m]!=0;m++){
        if((bsf[i][0]>='a'&&bsf[i][0]<='z')||(bsf[i][0]>='A'&&bsf[i][0]<='Z')||(bsf[i][0]=='_')){
         if((bsf[i][m]>='a'&&bsf[i][m]<='z')||(bsf[i][m]<='Z'&&bsf[i][m]>='A')||(bsf[i][m]>='0'&&bsf[i][m]<='9')||bsf[i][m]=='_'){
           continue;
        }else{
            a[i]++;
            break;
        }
      }else{
          a[i]++;
          break;
      }
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]>0){
            printf("no\n");
        }else{
            printf("yes\n");
        }
    }
return 0;  
}


