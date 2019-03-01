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
    char s[256], w[256],v[256]; 
    int i, j,slen,wlen,k;
    scanf("%s", w);
    scanf("%s", s);
    scanf("%s", v);
        slen = strlen(s);
    wlen = strlen(w);
       for(i=0;i<=wlen-slen;i++){
        for (j=0; j<slen; j++) {
             if (w[i+j] != s[j]) {
                break;
            }
		}
if (j == slen) {
	break;
}
        }
      if (j == slen) {
           for(k=0;k<i;k++){
            printf("%c",w[k]);
             }
           printf("%s",v);
         if(w[i+slen]!=0){
          for(k=i+slen;k<wlen;k++){     
        printf("%c",w[k]);
          }
           }
           
            }
     else if(i==wlen-slen+1)
     printf("%s",w);
     return 0;
}
