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
    int i,l;
    char a[200],b[200],r[200]={' '};
    gets(a);
    l=strlen(a);
    strcpy(b,a);
    for(i=0;i<l-1;i++){
        r[i]=a[i]+b[i+1];
        }
    r[l-1]=a[0]+a[l-1];
    printf("%s",r);
    
    scanf("%d",&i);
    return 0;
    }
