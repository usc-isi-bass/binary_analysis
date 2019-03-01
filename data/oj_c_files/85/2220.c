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
   int n,i,j,p;
   scanf("%d\n",&n);
   char str[22];
   for (i=0;i<n;i++){
      gets(str);
      p=0;
      for (j=0;str[j]!='\0';j++){
         if (j==0){
            if (str[j]>='a'&&str[j]<='z'){p++;}
            else if (str[j]>='A'&&str[j]<='Z'){p++;}
            else if (str[j]=='_'){p++;}
            else {p=p;}
         }
         if (j!=0){
            if (str[j]>='a'&&str[j]<='z'){p++;}
            else if (str[j]>='A'&&str[j]<='Z'){p++;}
            else if (str[j]=='_'){p++;}
            else if (str[j]>='0'&&str[j]<='9'){p++;}
            else {p=p;}  
         }
      }
      if (p==j){printf("yes\n");}
      else {printf("no\n");}
   }
   return 0;
}