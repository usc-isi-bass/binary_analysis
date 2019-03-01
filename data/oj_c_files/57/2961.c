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
  char str[100];
  int n,i,d,c,m;
  scanf("%d",&n);
  for(i=0;i<n;i++)
   {
     scanf("%s",str);
     m=strlen(str);
	   c=strlen(str)-2;
	   d=strlen(str)-3;
     if(str[c]=='e'||str[c]=='l' )
        str[c]='\0';
     else if(str[d]=='i') 
         str[d]='\0';
     printf("%s\n",str);
  }
   return 0;
}
