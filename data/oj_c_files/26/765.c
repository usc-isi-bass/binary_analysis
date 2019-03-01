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
         char a[1000];
	int i,j;
	cin.getline(a,1000);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=' ')continue;
		else 
		{
			for(j=i+1;j<strlen(a);j++)
			{
				if(a[j]==' ')a[j]='0';
				else break;
			}
		}
	}
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!='0')cout<<a[i];
	}
	return 0;
}

