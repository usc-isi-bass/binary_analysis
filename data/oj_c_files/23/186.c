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

void main()
{
	char str[101];
	gets(str);
	int i,j,k,m=0;
	char s[20][100];
	for (i=0;str[i]!='\0';)
	{
		for (j=0;str[i+j]!=' ';)
		{s[m][j]=str[i+j];j++;}
	    s[m][j]='\0';
	    i=i+j+1;
	    j=0;
		m++;}
   k=m-2;
   for (k=m-2;k>0;k--)
	   printf("%s ",s[k]);
   printf("%s\n",s[0]);
}



