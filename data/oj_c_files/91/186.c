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
	int i,n;
	char *p=(char *)malloc(101*sizeof(char));
	char *ch=(char *)malloc(101*sizeof(char));
	gets(p);
	n=strlen(p);

	for(i=0;i<n;i++)				//??
	{
		if(i==n-1)
			*(ch+i)=*(p+i)+*(p);
		else
			*(ch+i)=*(p+i)+*(p+i+1);	
	}
	*(ch+n)='\0';			//????,,????,,?????,????
	puts(ch);
	return 0;
}