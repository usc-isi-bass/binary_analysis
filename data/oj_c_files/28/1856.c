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

int main()
{
   char a[2000];
   char b[300][20];
   int i;
   int n=0;
   int k=0;
   gets(a);
   for(i=0;a[i]!='\0';i++){
       if(a[i]!=' '){
          b[n][k]=a[i];
          k++;
       }else if((a[i]==' ')&&(a[i+1]!=' ')){
          b[n][k]='\0';
          n++;
          k=0;
       }
    }
    b[n][k]='\0';
    for(i=0;i<n;i++){
        printf("%d,",(strlen(b[i])));
    }
    printf("%d",(strlen(b[n])));   
    return 0;
}     
          
             