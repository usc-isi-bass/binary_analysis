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

char s[5000],word[200][20];

int checknum(int m)
{
   if((s[m]!=' '&&s[m]!=','&&m<strlen(s))&&(s[m-1]==' '||s[m-1]==','||m-1<0))
   return 1;
   else return 0;
}
int findlen(int b)
{
  int i;
  i=0;
  while(s[b+i]!=' '&&s[b+i]!=','&&(b+i)<strlen(s)) i++;
  return i;
}

int main()
{
  int i,j,k,max,min,maxn,minn;
  gets(s);
  k=0;
  i=0;
  max=0;
  min=20;
  while(i<strlen(s))
  {
    if(checknum(i)==1)
	{
	   strncpy(word[k],s+i,findlen(i));
	   //printf("%d %d\n",min,minn);
	   if(max<findlen(i))
	   {
	     max=findlen(i);
		 maxn=k;
	   }
	   if(min>findlen(i))
	   {
	     min=findlen(i);
		 minn=k;
	   }
	   k++;
	}
	i++;
  }
  printf("%s\n%s",word[maxn],word[minn]);
  scanf("%d",&i);
  return 0;
}
