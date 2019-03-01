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

char peidui(char x);
char peidui(char x){
   char s;
   s=0;
   if(x=='A'){s='T';}
   if(x=='T'){s='A';}
   if(x=='C'){s='G';}
   if(x=='G'){s='C';}
   return s;
} 
int main(){
   int n,i,j,len;
   char jianji[256];
   scanf("%d",&n);
   for(i=0;i<n;i++){
   len=0;
   scanf("%s",jianji);
   len=strlen(jianji);
   for(j=0;j<len;j++){
   printf("%c",peidui(jianji[j]));
               }
   printf("\n");
   }
   
   return 0;
}