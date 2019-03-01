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
     char first,second;
     first=getchar();
     printf("%c",first);
     second=getchar();
     while (second!=EOF){
       if (!(first==' '&&second==' ')) 
         printf("%c",second);
       first=second;
       second=getchar();
       }
     return 0;
     }