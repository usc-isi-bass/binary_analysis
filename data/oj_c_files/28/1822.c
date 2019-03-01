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
char word[5000];
int i,j,l,a,len[300]={0};
gets(word);
l=strlen(word);
j=0;a=0;
for(i=0;i<l;i++)
{
  if(word[i]!=' ')
  {
	  len[j]+=1;
	  a=0;
  }
  else
  {
	  if(a==0)
	  {
		  j++;
	      a=1;
	  }
  }
}
printf("%d",len[0]);
for(i=1;i<=j;i++)
{
   printf(",%d",len[i]);
}

return 0;
}
