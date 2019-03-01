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
    void m(int a,int b);
    int n,k;
    scanf("%d%d",&n,&k);
    m(n,k);             
    return 0;
}

void m(int a,int b)
{
    int i,j,k,m=0,sum;
    for(j=1;m<a-1;j++){
        sum=j*(a-1);   
        k=0;
        while(k<a){
            if((sum*a/(a-1)+b)%(a-1)==0){
                sum=sum*a/(a-1)+b;  
                k++;  
                m=k;   
                if(k==a-1){
                    printf("%d",sum*a/(a-1)+b);
                }                
            }
            else 
                break;            
        }   
    }   
}