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
    char i=0,aa[100];
    gets(aa);
    char *p,*q;
    p=aa;
    while(*p!='\0'){
    if(*p!=' ')
    cout<<*p;
    if(*p==' '){
       cout<<*p;
       q=p;
       q++;
       while(*q==' ')
               q++;
              q--;
              p=q;
               }   
            p++;
              }
              
              return 0;
              } 
