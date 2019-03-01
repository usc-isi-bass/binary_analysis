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
	int n,p,i,l;
	char a[200];
	
	gets (a);
	l=strlen(a);
	p=0; 
	
	
	for (i=0;i<=l-1;i++)
	{
    	if (a[i]==' '&&(p==0))
		{
			printf(" ");
			p=1;
			
		}
        else if (a[i]==' '&&(p==1))
		{
			continue;
		}
		else 
		{
			printf("%c",a[i]);
			p=0;
			continue;
		}

	}
	
	
	
	
	return 0;
}
