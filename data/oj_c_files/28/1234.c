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

int main ()
{
	char words[300][30];
	char temp;
   int i=0,l;
   scanf("%s",words[i]);
   l=strlen(words[i]);
   printf("%d",l);
   i++;
   scanf("%c",&temp);
   while (temp!='\n')
   {
	   scanf("%s",words[i]);
	   l=strlen(words[i]);
	   printf(",%d",l);
	   i++;
            scanf("%c",&temp);

   }
   return 0;
}
