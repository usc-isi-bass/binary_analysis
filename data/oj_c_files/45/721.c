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

void main(){
 char c1[50],c2[50];
 int i,a,b,j,k;
 scanf("%s %s",c1,c2);
 a=strlen(c1);
 b=strlen(c2);
       


 for(i=0;i<b;i++)
 {   if(c2[i]!=c1[0])continue;
     if(c2[i]==c1[0])
  {   for(j=i,k=0;j<b,k<a;j++,k++)
  {   if(c2[j]==c1[k])continue;
      else break;}
  
  

 
     if(c2[i+a-1]==c1[a-1])
   {printf("%d\n",i);break;}
  
  
 }
}
}