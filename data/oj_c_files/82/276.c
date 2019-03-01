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
    int n,k,a,b,m,l,s;
    scanf("%d",&n);
    k=0;
    m=0;
    s=0;
    while(m<n){
               scanf("%d %d",&a,&b);
               if((a>=90)&&(a<=140)&&(b>=60)&&(b<=90)){
                                                       k=k+1;
                                                       m=m+1;
                                                       } 
               else{
                    m=m+1;
                    if(s<k){
                            s=k;
                            }
                    k=0;
                    }
                    }
 if(s<k){
    s=k;
    }
    printf("%d",s);
    return 0;
    }