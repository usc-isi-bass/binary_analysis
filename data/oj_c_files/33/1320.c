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
    int n,m;                 
    char in[max],out[max];
    scanf("%d",&n);
    for(int a=0;a<n;a++){
            scanf("%s",in);
            for(int c=0;c<max;c++){
                    if((in[c])=='\0'){
                                      m=c;
                                      break;
                                      }
                                      }
            for(int b=0;b<=m;b++){
                    if((in[b])=='A'){
                                     out[b]='T';
                                     }else if((in[b])=='T'){
                                           out[b]='A';
                                           }else if((in[b])=='C'){
                                                 out[b]='G';
                                                 }else if((in[b])=='G'){
                                                       out[b]='C';
                                                       }else{
                                                             out[b]='\0';
                                                             }
                    }
            printf("%s\n",out);
          }        

    return 0;
}
