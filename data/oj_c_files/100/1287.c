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

int i,n,a[30]={0},k=0;
char str[1000],*q;
int main(){
    
    scanf("%s",str);
    n=strlen(str);
    q=str;
    
    for(i=0;i<n;i++){
        if((*q>=97)&&(*q<=122)){
            k=1;
            a[*q-97]++;
        }
        q++;
    }
    if(k==0)
        printf("No\n");
    else for(i=0;i<26;i++){
        if(a[i]!=0)
            printf("%c=%d\n",97+i,a[i]);
    }
//scanf("%d",&i);
return 0;
}
