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
    int n;
    int m=0;
    int j=0;
    char zfc[202];
    char mb[202];
    gets(zfc);
    n=strlen(zfc);
    for(int i=0;i<n;i++){
        if(!(zfc[i]==' '&&zfc[i+1]==' ')){
             mb[j]=zfc[i];
             j++;
        }
    }
    mb[j]='\0';
    printf("%s",mb);
    return 0;
}