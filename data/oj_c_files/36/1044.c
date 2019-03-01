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
    
    int i,j,amount,n;
    char small[51],big[51];
    scanf("%s%s",small,big);
    n=strlen(small);
    if(strlen(small)==strlen(big)){
       for(i=0;big[i]!='\0';i++){
            for(j=0;small[j]!='\0';j++){
                 if(small[j]==big[i]){
                                       small[j]=small[n-1];
                                       small[n-1]='\0';
                                       n=n-1;

                                        }
                 }
                              
            }
        if(n==0){
                 printf("YES\n"); 
        }else {
              printf("NO\n");
              }
    }else
        printf("NO\n");
    
     return 0;                                        
}
