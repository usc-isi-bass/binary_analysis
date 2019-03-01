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
int n,result=0;
char x[1000][21];
scanf("%d",&n);
 for(int i=0;i<n;i++){
    scanf("%s",x[i]);
 }
  for(int j=0;j<n;j++){
    if(((x[j][0]>='a')&&(x[j][0]<='z'))||((x[j][0]>='A')&&(x[j][0]<='Z'))||(x[j][0]=='_')){
      for(int k=1;x[j][k]!='\0';k++){
        if(((x[j][k]>='a')&&(x[j][k]<='z'))||((x[j][k]>='0')&&(x[j][k]<='9'))||((x[j][k]>='A')&&(x[j][k]<='Z'))||(x[j][k]=='_')) {
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

