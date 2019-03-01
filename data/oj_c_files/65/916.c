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

int main() {
    int a,b,n,i,c,d;
    scanf ("%d",&n);
    d=0;
    c=0;
    for (i=0;i<n;i++){
        scanf ("%d %d",&a,&b);
        if(a==0&&b==1){
            c++;
        }
        else if (a==0&&b==2){
            d++;
        }
        else if (a==1&&b==0){
            d++;
        }
        else if (a==1&&b==2){
            c++;
        }
        else if (a==2&&b==0){
            c++;
        }
        else if (a==2&&b==1){
            d++;
        }
        else {
            i=i;
        }
        
    }
   if (c>d){
       printf ("A");
   }
   else if (c<d){
       printf ("B");
   }
   else if (c==d){
       printf ("Tie");
    }
    return 0;
}

