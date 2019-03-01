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
 char s[400];
 int n=0,len,i,b[100];
 for(i=0;i<100;i++)
	 b[i]=0;
 gets(s);
 len=strlen(s);
 for(i=0;i<len;i++)
  b[s[i]-'A']++;
 for(i=0;i<26;i++)
  if(b[i]!=0) printf("%c=%d\n",'A'+i,b[i]);
    else n++;
 for(i=32;i<58;i++)
  if(b[i]!=0) printf("%c=%d\n",'A'+i,b[i]);
  else n++;
 if(n==52) printf("No");
 return 0;
}