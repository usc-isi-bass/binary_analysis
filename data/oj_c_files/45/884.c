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

void main()
{
  char s[100];
  int length,i,x,y,j;
  gets(s);
  length=strlen(s);
  for(i=0;i<length;i++)
    if(s[i]==' ')
	  x=i;
  for(i=x+1;i<length;i++)
   {
     if(s[0]==s[i])
       {
         y=i;
         for(j=0;j<x;j++)
           if(s[j]!=s[y+j])
	     break;
         if(j==x) 
           {
             printf("%d",y-x-1);
             break;
            }
        }
   }
}
	  
  
