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
   int n,i,j=0;
   char a[5000]; 
   gets(a);
   n=strlen(a);
   for(i=0;i<n;i++){
       if(a[i]!=' '){
           j++;
           if(i==n-1){printf("%d",j);}
       }
       else if(j!=0){
           printf("%d,",j);
           j=0;
       }
   }
return 0;
}