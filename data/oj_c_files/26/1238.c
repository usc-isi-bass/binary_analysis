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
    char a[200],b[200];
    int i,j=0,p;
    gets(a);
    for(i=0;a[i]!='\0';i++){
    if(a[i]!=' '){
        b[j]=a[i];
        j=j+1;
        p=0;
     }
    if((a[i]==' ')&&p==0){
        b[j]=a[i];
        j=j+1;
        p=1;
    }
    }
    b[j]=0;
    printf("%s",b);
return 0;
}



