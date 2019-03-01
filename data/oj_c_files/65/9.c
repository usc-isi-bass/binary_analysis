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
    int n,i,a=0,b=0,c,d;
    scanf("%d",&n);
    for(i=0;i<n;i++){
          scanf("%d%d",&c,&d);
          if(c-d==1)b++;
          else if(d-c==1)a++;
          else if(d<c)a++;
          else if(d>c)b++;
    }
    if(a<b)printf("B");
    else if(a>b)printf("A");
    else printf("Tie");
    return 0;
}