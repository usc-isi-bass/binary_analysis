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
	int i=0,n=0,k=0;
	char s[101],s2[101][101];
	gets(s);
	while(s[i]!='\0')
	{
		if(s[i]!=' ')
		{
			s2[n][k]=s[i];
			k++;i++;
		}
		else 
		{
			s2[n][k]='\0';
			k=0;
			n++;
			i++;
		}
	}
	s2[n][k]='\0';
	for(i=n;i>0;i--)printf("%s ",s2[i]);
	printf("%s",s2[0]);
}