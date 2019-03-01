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
    int k,i,j,l;
    char aa[100],bb[100][100];
    gets(aa);
    i=0;
    j=0;
    l=0;
    while(aa[i]!='\0'){
      if(aa[i]!=' '){
          bb[j][l]=aa[i];
             l++;
                  }
      else {  
         j++;
         l=0;
         }
         i++;
         }
         cout<<bb[j];
         for(k=j-1;k>=0;k--){
                    cout<<" "<<bb[k];
             }
                return 0;
         } 