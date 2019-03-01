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
	char s[105],t[105]={'\0'};
	int i,j=0,k=0,n,m;

	gets(s);
	n=strlen(s);		
	for(i=0;i<n;i++)
	{
		if(s[i]==' '&&s[i-1]==' ')
		{
			k++;	
		}
		if(k<1)
		{
			t[j]=s[i];
			j++;
		}
		k=0;	
	}	
	m=strlen(t);
	for(i=0;i<m;i++)
	printf("%c",(int)t[i]);
	return 0;
}