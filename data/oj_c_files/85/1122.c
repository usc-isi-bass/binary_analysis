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



char juzi[1000];
int islegal(char juzi[],int n)
{
	int q;
	if((juzi[0]>'z'||juzi[0]<'a')&&(juzi[0]>'Z'||juzi[0]<'A')&&juzi[0]!='_')
		return 0;
	for(q=1;q<n;q++)
	{
		if((juzi[q]>'z'||juzi[q]<'a')&&(juzi[q]>'Z'||juzi[q]<'A'))
		{
			if(juzi[q]>'9'||juzi[q]<'0')
			{
				if(juzi[q]!='_')
					return 0;
			}
		}
	}
	return 1;
}


	
	
	
void main()
{	
	int n;
	char m[6];
	gets(m);
	n=atoi(m);
	while(n--)
	{
		gets(juzi);
		int len=strlen(juzi);
		if(islegal(juzi,len)==1)
			printf("yes\n");
		else
			printf("no\n");
	}
}
