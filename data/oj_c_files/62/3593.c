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
    
    char n[100];
    int a,b,c=0,d,i,j,k,l;
    gets(n);
    b=strlen(n);
    for(i=0;i<b;i++)
        if(n[i]==32){
            for(j=i+1;n[j]==32;j++)
            if(n[j]==32)
                {
                    for(k=j;k<b-1;k++)
                    {
                        n[k]=n[k+1];
                    }
                    b--;
                    i=0;
                }
        }
                
        for(l=0;l<b;l++)
        printf("%c",n[l]);
        
    return 0;
}
                
                
                
                
                
                