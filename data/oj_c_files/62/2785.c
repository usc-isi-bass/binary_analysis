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

int main () {
int i,l,j;
char s[max];
gets(s);
l=strlen(s);
for (i=0;i<l-1;i++) {
    if(s[i+1]==' '&&s[i]==' ') {
       for (;s[i+1]==' ';) {
        for(j=i;j<l-1;j++) {
               s[j]=s[j+1];
                           }
            s[l-1]='\0';
            l--;
                         
                            }
                                }
                    }
        puts(s);                                                 
            
             return 0;
            
             }

