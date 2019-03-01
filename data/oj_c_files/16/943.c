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
	char a[5];
	int i, j;
	for(i=0; i<5; i++)
	{
		scanf("%c",&a[i]);
		if(a[i]=='\n') 
		{
			for(j=i; j<5; j++)
			{
				a[j]='\0';
			}
			break;
		}
	}
	for(i=4; i>=0; i--)
	{
		if(a[i]!='\0') printf("%c",a[i]);
	}
}