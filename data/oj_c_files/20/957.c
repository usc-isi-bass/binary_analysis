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
    char aa[20],bb[10],c;
    int i;
    while(cin>>aa>>bb){
       i=0;
       c=aa[0];
       while(aa[i]!='\0'){
         if(aa[i]>c)
          c=aa[i];           
       i++;
       }
       i=0;
       while(aa[i]!='\0'){
          if(aa[i]==c)
               break;
           cout<<aa[i];
            i++;
            }
            cout<<aa[i]<<bb;
            i++;
            while(aa[i]!='\0'){
               cout<<aa[i];
               i++;
               }
               cout<<endl;
               }
                    return 0;
               }
            