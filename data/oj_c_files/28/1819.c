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

int main(int argc, char* argv[])
{
 char a[300][50],s[1000];
  gets(s);
  int i,l[300]={0},g=0;
  for(i=0;i<strlen(s);i++)
  {
	  if(s[i]==' '&&s[i-1]!=' ')
   g++;
  }
  g=g+1;
  int j=1;
  for(i=0;i<strlen(s);i++)
  {
    if(s[i]!=' ')
    {l[j]++;}
    else  
	if(s[i+1]!=' ')
	{j++;}
   }
  for(i=1;i<g;i++)
  {
   printf("%d,",l[i]);
  }
  printf("%d",l[g]);


   return 0;
}
