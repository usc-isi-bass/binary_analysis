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
    char zfc[101],jg[101];
    int i,m=0;
    gets(zfc);
    for(i=0;zfc[i]!='\0';i++){
        if(zfc[i]!=' '){
            jg[m]=zfc[i];
            m+=1;
        }else if(zfc[i]==' '&&zfc[i+1]!=' '){
            jg[m]=zfc[i];
            m+=1;
        }else{
            continue;
        }
    }
     jg[m]='\0';
      printf("%s\n",jg);
    return 0;
}



