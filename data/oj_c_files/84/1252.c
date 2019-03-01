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
  
    
    int a,b,c,d,e,f,g;
    
  
              scanf("%d\n",&a);
              if(a==2){
              scanf("%d\n",&e);
              scanf("%d",&f);
           if(e>f){
           c=e;
           d=f;
           }else{
            c=f;
           d=e;     
           }
           }else{
            scanf("%d\n",&e);
            scanf("%d\n",&f);
           if(e>f){
           c=e;
           d=f;
           }else{
            c=f;
           d=e;     
           }            
           b=1;
           while(b<(a-2)){
           b=b+1;
           scanf("%d\n",&g);
           if(c<=g){
                    d=c;
                    c=g;
                   
                    }else{
                    if(d<=g){
                    d=g;
                    }
                    }
                    }
                    
            scanf("%d",&g) ;  
            if(c<=g){
                    d=c;
                    c=g;
                   
                    }else{
                    if(d<=g){
                    d=g;
                    }
                    }
                    }
       printf("%d\n%d\n",c,d);
     
    return 0;
}
