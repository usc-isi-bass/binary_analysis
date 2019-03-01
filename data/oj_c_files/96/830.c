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
    char n[1000];
    int a[1000];
    int i,yu,len,sh;
    scanf("%s",&n);
    len=strlen(n);
    for(i=0;i<len;i++)
       a[i]=n[i]-48;
    if(len==1)  printf("0\n%s",n);
    if(len==2&&(10*a[0]+a[1])<13) printf("0\n%s",n);
    if(len>2||(len==2&&(10*a[0]+a[1])>=13)) 
    {    
         if((10*a[0]+a[1])>=13) { yu=(10*a[0]+a[1])%13;sh=(10*a[0]+a[1])/13;printf("%d",sh);}
         if((10*a[0]+a[1])<13){yu=10*a[0]+a[1];}
         for(i=2;i<len;i++)
         {
             
             sh=(10*yu+a[i])/13;
             yu=(10*yu+a[i])%13;
             printf("%d",sh);
         }
         printf("\n");
         printf("%d",yu);
    }
scanf("%d",&i);    
return 0;    
    
}