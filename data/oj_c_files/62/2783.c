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
    char u[1000];
    int n,i,j,c,b=0;
    gets(u);
    n=strlen(u);
    
    for(i=1;i<n-1;i++){
    c=0;         
    while(1){
   
    if(u[i]==32&&u[i+1]==32){
    for(j=i;j<n-2;j++){
    u[j+1]=u[j+2];     
    }
    c++;
          }
         
    if((u[i]==32&&u[i+1]!=32)||u[i]!=32)
          break; 
          }
           b=b+c;
          } 
                
                
for(i=0;i<n-b;i++){   
printf("%c",u[i]);
}

return 0;  
}
