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
char str[1000];
int i,j,n;
scanf("%s",str); 

for(i=0;str[i]!='\0';i++)
  {
  if(str[i]>='a')
  str[i]+='A'-'a';
  else;
  }
   

n=1;
for(i=0;str[i]!='\0';i++)
    {

     if(str[i]==str[i+1])
     n++;
     else
     {printf("(%c,%d)",str[i],n);
     n=1;}
    
        
    }                   
 return 0;
}   
