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
  char c[200],k;
  int pla[200],s,e,i,l,j,t;
  gets(c);
  l=strlen(c);
  j=0;
  for(i=0;i<l;i++)
   {
    if(c[i]==' ')
	 {
	   j++;
	   pla[j]=i;
	 }
   }
  for(i=1;i<=j+1;i++)
   {
    if(i==1) s=0;
	else s=pla[i-1]+1;
	if(i==j+1) e=l-1;
	else e=pla[i]-1;
	for(t=0;s+t<e-t;t++)
      {
	   k=c[s+t];
	   c[s+t]=c[e-t];
	   c[e-t]=k;
	  }
    }
  for(i=l-1;i>=0;i--)
   printf("%c",c[i]);
  return 0;
}  
     