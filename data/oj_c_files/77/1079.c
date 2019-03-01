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
char num[100]={0}; int i,j,k,m,t;
 gets(num); t=strlen(num);
 for(i=0;i<t;i++)
{ while(num[i]!=num[0]&&num[i]!='\0')
{     k=i;
    for(j=k;j>=0;j--)
   if(num[j]==num[0])
     break;
printf("%d %d\n",j,k);
num[j]='\0'; num[k]='\0';
           } 
               }
return 0;



}