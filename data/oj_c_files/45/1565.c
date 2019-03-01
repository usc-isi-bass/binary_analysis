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
    char s[100],w[100];
	int j,sl,wl;
      scanf("%s %s",&s,&w);
	  sl=strlen(s);wl=strlen(w);
	   for(j=0;j<wl;j++)
			   if (w[j]==s[0])
			   { printf("%d",j);break;}
			   return 0;

}
