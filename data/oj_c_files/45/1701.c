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
	char a[50],b[50];
	scanf("%s%s",a,b);
	int i,j,s;
	s=(int)strlen(b);
	for(i=0;i<s;i++)
	{
		if((b[i]==a[0])&&(b[i+1]==a[1])) 
		{
			printf("%d",i);
			break;
		}
	}
}

