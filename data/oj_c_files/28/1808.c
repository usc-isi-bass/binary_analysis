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
 char s[3000];
 gets(s);
 int count=0;
 int i,len;
 for(i=0;;i++)
 {
  if(s[i]!=' ' && s[i]!='\0')
	  count++;
   else 
	  break;
 }
 printf("%d",count);
 len=strlen(s);
 if(s[i]=='\0') 
	  return 0;
 count=0;
 for(;i<=len;i++)
 {
    if(s[i]!=' '&&(s[i+1]==' '||s[i+1]=='\0'))
	{count++;printf(",%d",count);count=-1;}
	if(s[i]==' ')
		 continue;
    if(s[i]!=' ' && s[i]!='\0')
		count++;
	if(s[i+1]=='\0')
		 break;
 }
 return 0;
}