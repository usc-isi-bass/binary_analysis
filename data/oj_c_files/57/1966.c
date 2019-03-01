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
  int n,i,l,j;
  char s[20],c[20];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",s);
    l=strlen(s);
    for(j=0;j<l;j++){
      if(s[j]=='e'||s[j]=='l'||s[j]=='i'){
        strcpy(c,s+j);
        if(strcmp(c,"er")==0||strcmp(c,"ly")==0||strcmp(c,"ing")==0){
          s[j]='\0';
          printf("%s\n",s);
        }
      }
    }
  }
  return 0;
}