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
char str[260],*ps,str2[260];
int n,i,k;
scanf("%d\n",&n);

for(k=0;k<n;k++){
   gets(str);
   i=0;
   for(ps=str;*ps!='\0';ps++){
     if(*ps=='A')str2[i]='T';
         else if(*ps=='T')str2[i]='A';
               else if(*ps=='G')str2[i]='C';
                    else str2[i]='G';
     i++;}
     str2[i] = '\0';
    printf("%s\n",str2);}
return 0;
}