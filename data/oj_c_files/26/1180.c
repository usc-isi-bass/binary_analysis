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
char zfc[1000],cs[1000]; 
int n,e,j=0,i=0,a; 
gets(zfc);    
n=strlen(zfc); 
while(i<n){  
    e=0;  
    cs[j]=zfc[i];  
    if(zfc[i]==' '){   
        for(a=i+1;a<n;a++){    
            if(zfc[a]==' '){ e++; continue;  }    
            else{  break; }   
        }      
        i=i+e; }     
    j++;  i++; }
    cs[j]='\0';
printf("%s",cs);
return 0;
}

