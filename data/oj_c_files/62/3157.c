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
    char s[201],q[201];
    int i=0,j=0;
    gets(s);
    while(s[j]){
        if(s[j]!=' '||(s[j]==' '&&s[j-1]!=' '))
       {q[i]=s[j];
        i=i+1;}
        j=j+1;
    }
    q[i]='\0';
    printf("%s",q);
    return 0;
    
}
