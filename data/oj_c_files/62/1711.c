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
   char str[250];
   int i,j,n;
   gets(str);
   for(i=0;i<strlen(str);i++)
   {
	 if(str[i]!=' ')  printf("%c",str[i]);
	 if(str[i]==' '&&str[i+1]!=' ')  printf(" ");
   }
	   
	return 0;
}