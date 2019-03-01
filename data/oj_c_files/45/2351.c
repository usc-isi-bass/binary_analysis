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
	char s[50],w[50];
	int i,j,k,lens;
	scanf("%s%s",s,w);
	lens=strlen(s);
	
	for (i=0;w[i+lens-1]!='\0';i++)
	{
		j=0;k=i;

		while((w[k]==s[j]) && (j<lens))
		{k++;j++;}

		if (j==lens)
		{printf("%d",i);
		 break;}
	}
	return 0;
}