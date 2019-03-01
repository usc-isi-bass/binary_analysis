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
    int c,d,e,count=0,i;
    double result,n;
    scanf("%lf",&n);
    char a[500],b[500];
    scanf("%s%s",a,b);
    c=strlen(a);
    d=strlen(b);
    if(c!=d)
    printf("error");
    else{
        for(i=0;i<c;i++){
            if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){
                printf("error");
                result=-1;
                break;
            }
            else{

            if(a[i]==b[i])
            count++;
            }
        }
        if(result!=-1){

        result=(double)count/c;
        if(result>n)
           printf("yes");
        else
           printf("no");
        }
    }


    return 0;
}
