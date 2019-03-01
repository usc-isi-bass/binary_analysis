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
    int a[6];
    int b[6]={100,50,20,10,5,1};
    scanf("%d",&n);
    int c=n;
    a[0]=n/b[0];
    for(int i=1;i<6;i++){
        c=c-a[i-1]*b[i-1];
        a[i]=c/b[i];
    }
    for(int j=0;j<6;j++){
        printf("%d\n",a[j]);
    }
    return 0;
}
