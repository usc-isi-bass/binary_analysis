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

int main ()
{
 int t,l,a,b;
 char string[100001];
 int i=0,j=0,c=0,d=0;
 scanf("%d",&t);
 scanf("\n");
 while(t--)
 {
  gets(string);
  l=strlen(string); 
  c = 0;
for(a=0;a<l;a++)
  {    
   i=0;
   j=0;
while(i<l)
   {   
    if(string[a]!=string[i] && a!=i)
    {
     j++;
    }
    i++;
   }
   if(j==l-1)
   {
    c=c+1;
    printf("%c\n",string[a]);
    break;
   } 
  }
if (c==0)
  {
   printf("no\n");
  }
 }
 return 0;
}

