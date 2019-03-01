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
    char aa[100];
    gets(aa);
    int i,j;
    i=0;
    while(aa[i]!='\0'){
        j=0;
       if(aa[i]!=' '){
       cout<<aa[i];
       i++;
       }
       if(aa[i]==' '){
       cout<<" ";
         while(aa[i+j]==' ')
          j++;
          i=i+j;
          }
          }
          return 0;
          }         