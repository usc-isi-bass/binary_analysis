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

int main()
{
    int i,l,p;
    double n,m=0,b;
    char d[501],f[501];
    scanf("%lf",&n);
    scanf("%s",d);
    scanf("%s",f);
    l=strlen(d);
    p=strlen(f);
    if(l!=p){printf("error");
               
               return 0;}
    for(i=0;d[i];i++){
        if(!(d[i]=='A'||d[i]=='T'||d[i]=='G'||d[i]=='C')){
            printf("error");
            
            return 0;}}
    for(i=0;f[i];i++){
        if(!(f[i]=='A'||f[i]=='T'||f[i]=='G'||f[i]=='C')){
            printf("error");
            
            return 0;}}
    for(i=0;d[i];i++){
        if(d[i]==f[i])m++;}
    b=m/l;
    if(b>=n)printf("yes");
    else printf("no");
    
    return 0;
}
