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
int n,i,m,result=0;
char bsf[1000][21];
scanf("%d",&n);
 for(i=0;i<n;i++){
    scanf("%s",bsf[i]);
 }
  for(i=0;i<n;i++){
    if(((bsf[i][0]>='a')&&(bsf[i][0]<='z'))||((bsf[i][0]>='A')&&(bsf[i][0]<='Z'))||(bsf[i][0]=='_')){
      for(m=1;bsf[i][m]!='\0';m++){
        if(((bsf[i][m]>='a')&&(bsf[i][m]<='z'))||((bsf[i][m]>='0')&&(bsf[i][m]<='9'))||((bsf[i][m]>='A')&&(bsf[i][m]<='Z'))||(bsf[i][m]=='_')) {
        }
        else{
            result=1;
        }
      }
    }
     else{
          result=1;
      }
   if(result==0){printf("yes\n");}else{printf("no\n");};
  result=0;
  }
 return 0;
}


