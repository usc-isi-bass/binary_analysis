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
    int n,m,i;
    int s[100];
    scanf("%d %d",&n,&m);
    getchar();
    for(i=0;i<n;i++){
         scanf("%d",&(s[i]));
         getchar();
    }
    for(i=n-m;i<n;i++){
         printf("%d ",s[i]);
         getchar();
    }
    for(i=0;i<n-m-1;i++){
         printf("%d ",s[i]);
         getchar();
    }
    i=n-m-1;
    printf("%d",s[i]);
    return 0;
}