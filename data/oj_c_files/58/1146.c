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


int legal(char zfc[81]);

int main(int argc, char* argv[])
{
	int n,i,judge;
	char str[81];
         gets(str);
         n = atoi(str);
	for(i=0;i<n;i++)
	{
		gets(str);
		judge=legal(str);
		printf("%d\n",judge);
	}
	
	return 0;
}


int legal(char zfc[81])
{
	int lenth,i,m=1;
	lenth=strlen(zfc);

	if(zfc[0]=='_'||(zfc[0]>='A'&&zfc[0]<='Z')||(zfc[0]>='a'&&zfc[0]<='z'))
	{
		for(i=1;i<lenth;i++)
		{
			if((zfc[i]>='A'&&zfc[i]<='Z')||(zfc[i]>='a'&&zfc[i]<='z')||(zfc[i]>='0'&&zfc[i]<='9')||zfc[i]=='_')
				m=1;
			else
			{
				m=0;break;
			}
		}
		if(m)
			return 1;
		else
			return 0;
	}
	else
		return 0;			
}
