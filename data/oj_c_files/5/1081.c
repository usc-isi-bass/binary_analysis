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
    double n,m;
    int i,k=0;
    char a[500],b[500];
    scanf("%lf%s%s",&n,a,b);
    if(strlen(a)!=strlen(b))
        printf("error");
    else{
        int p=1;
    for(i=0;i<strlen(a);i++){
        if((a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G')&&(b[i]=='A'||b[i]=='T'||b[i]=='C'||b[i]=='G'))
        {
             if(a[i]==b[i])
                 k++;}
        else   {p=0;printf("error");break;}
    }
    if(p==1){
    m=(double)k/strlen(a);
    if(m>n)
        printf("yes");
    else
        printf("no");
    }}
    return 0;
}