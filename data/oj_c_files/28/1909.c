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
  char v[10000];
  gets(v);
  int a[400];
  for(int i=0;i<=strlen(v)-1;i++)
 { 
    if((v[i]==' ')&&(v[i+1]==' '))      
       {
           for(int j=i;j<=strlen(v)-1;j++)
             {
               v[j]=v[j+1];    
             }
            i--;                
       }
 }

 int p=0;
 for(int i=0;i<=strlen(v)-1;i++)
 {
    if(v[i]==' ')
     {
       a[p]=i;
       p++;        
     }    
 }
if(p==0){printf("%d",strlen(v));} 
else{ printf("%d,",a[0]);
 for(int i=0;i<=p-2;i++)
 {
   printf("%d,",a[i+1]-a[i]-1);      
 }
 printf("%d",strlen(v)-1-a[p-1]);}
 int y;scanf("%d",&y);
 return 0;    
    
 
 
 }
