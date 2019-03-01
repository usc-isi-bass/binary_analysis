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
 char s[1000][40];
 int n,i;
 scanf("%d",&n);getchar();
 for(i=0;i<n;i++){
     scanf("%s",s[i]);getchar();
     }
  int h=strlen(s[0]);
  printf("%s",s[0]);
  for(i=1;i<n;i++){
     h+=strlen(s[i])+1;
     if(h<=80){
           printf(" %s",s[i]);getchar();
     }else{
           h=strlen(s[i]);
           printf("\n");getchar();
           printf("%s",s[i]);
           }
  }
    return 0;
} 