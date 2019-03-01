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

void main ()
{  int n,i,j,k,a;
char s[500];
  scanf("%d\n",&n);

   for(i=0;i<n;i++)
   { gets(s);
    a=strlen(s);
	for(j=0;j<a;j++)
	{if(s[j]=='A')
	printf("T");
if(s[j]=='T')
	printf("A");
if(s[j]=='C')
	printf("G");
if(s[j]=='G')
	printf("C");
	}
printf("\n");	
   }

}