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

struct N{
int a;
struct N* next;
};
int main(){
	int *p,*q,n,a[100],x;
 scanf("%d",&n);
 for(p=a;p<a+n;p++){
                    scanf("%d",p);}
                    for(p=a,q=a+n-1;p<a+n/2;p++,q--){
                                         x=*p;
                                         *p=*q;
                                         *q=x;
                                         }
 for(p=a;p<a+n;p++){
                    if(p==a){printf("%d",*p);}
                    
                    else{printf(" %d",*p);}
                    }
 scanf("%d",&n);
 return 0;
}
 
                                  
