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
   char s[400],*p,*q,t[400]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
   int u[100],i=0,k=0,j=0,f=0;
   for(k=0;k<52;k++){
	   u[k]=0;
   }
   scanf("%s",s);
   for(q=t;*q!='\0';q++){
     for(p=s;*p!='\0';p++){
      if(*p==*q){
	   u[i]++; f=1 ;              
      }
     }
     i++;
   }
   for(q=t;*q!='\0';q++){
    if(u[j]!=0){
	    printf("%c=%d",*q,u[j]);printf("\n");
    }
    j++;
   }
   if(f==0){
	   printf("No");
   }
return 0;
   }
