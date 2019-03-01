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
 char a[201],b[201];
 gets(a);
 int i,j;
 int l=strlen(a);
 for(i=0,j=0;i<l;i++,j++){
     int k=0;
     b[j]=a[i];
     if(a[i]==' '){
     
        for(int m=i+1;m<l;m++){
         if(a[m]==' '){
             k++;
         }else{
             break;
         }
        }
     }
     i=i+k;
 }
 b[j]=0;
 puts(b);

 return 0;
}

