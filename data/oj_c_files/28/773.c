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
 char s[1000],sub[100],*ptr;
 int i,j,mark=0;
 gets(s);
 ptr=s;
 for( ; *ptr != 0; )
 {
 	if(*ptr == ' ') {		ptr++;		continue;    }
    /* get a word from s */
  for(i=0; i<100; i++)          sub[i]=0;
   
  for ( i=0 ; ; ptr++, i++)
  { 
       sub[i] = *ptr;
       if (((sub[i] == ' ') || (sub[i]==0)) && (mark==0) )
       {
          sub[i] = 0;
          printf("%d",strlen(sub));
          mark=1;
          break;
       }
       if(((sub[i] == ' ') || (sub[i]==0)) && (mark!=0))
       {
          sub[i] = 0;
          printf(",%d",strlen(sub));
          break;
       }  
  }
	if(*ptr == 0)  break;
	else				   ptr++;
 }
 return;
}