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
     int n;
     scanf("%d\n",&n);
     char jjl[n][256];
     for(int i=0;i<n;i++){
         gets(jjl[i]);
     }
     for(int g=0;g<n;g++){
         for(int k=0;jjl[g][k]!='\0';k++){
             if(jjl[g][k]=='A'){jjl[g][k]='T';}
             else if(jjl[g][k]=='T'){jjl[g][k]='A';}
             else if(jjl[g][k]=='C'){jjl[g][k]='G';}
             else if(jjl[g][k]=='G'){jjl[g][k]='C';}
         }
     }
     for(int m=0;m<n;m++){
         puts(jjl[m]);
     }
     return 0;
}

