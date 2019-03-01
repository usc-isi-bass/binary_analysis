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
	int i,j,mark;
	char a[52],b[52];
	scanf("%s %s",a,b);
	for(i=0;i<strlen(b)-strlen(a)+1;i++)
	{
		mark=0;
		for(j=0;j<strlen(a);j++)
		{
			if(a[j]!=b[i+j]) 
			{
				mark=1;
				break;
			}
		}
		if(mark==0) break;
	}
	printf("%d",i);
	return 0;
} 