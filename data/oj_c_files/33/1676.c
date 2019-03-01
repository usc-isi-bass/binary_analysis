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
    char zfc[256],*a;
    int n,i,j,k,s;
    scanf("%d",&n);
    for(k=0;k<n;k++){
        scanf("%s",zfc);
        for(a=zfc;*a!='\0';a++){
            if(*a=='A') *a='T';
            else if(*a=='T') *a='A';
            else if(*a=='C') *a='G';
            else *a='C';
        }
        printf("%s\n",zfc);
    }
    return 0;
}
