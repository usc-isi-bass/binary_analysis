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
    int i=0,flag=0;
    int c;
    c=getchar();
    while (c!=EOF){
        if (flag==0&&isgraph(c)) printf("%c",c);
          else if (flag==0){
               printf("%c",c);
               flag=1;
               }
               else if (isgraph(c)){
                    printf("%c",c);
                    flag=0;
                    }
        c=getchar();
        i++;
        }
}
