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
 char c='0';
 char *s[100];
 char t[100],r[100];
 int i=0,j;
 while(c!='\n'){
                s[i]=(char*)malloc(sizeof(char)*100);
                scanf("%s",s[i++]);
                scanf("%c",&c);                
 }
 scanf("%s",t);
 scanf("%s",r);
 for(j=0;j<i;j++){
  if(strcmp(t,s[j])==0)
   s[j]=r;
  printf("%s",s[j]);  
  if(j<i-1)
   printf(" ");
 }
return 0;
}