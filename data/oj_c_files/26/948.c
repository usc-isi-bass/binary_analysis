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
    int i,j=0,a=0;
    char s[101];
    char z[102];
    gets(s);
    for(i=0;i<100;i++){
        z[i]=' ';
    }
    for(i=0;!(s[i]==0);i++){
        if(!(s[i]==' ')){
           j=j+a;  
           z[j]=s[i];
           j++;
           a=0;
        }
        else{
            a=1; 
        }  
    }
    z[j]='\0';
    puts(z);
    return 0;
}