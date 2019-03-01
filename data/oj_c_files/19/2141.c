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
	char a[100][20],m,b[20],c[20];
	int i,j;
	for(i=0;;i++)
	{
		scanf("%s",a[i]);
		if(getchar()=='\n')
			break;
	}
	    gets(b);
	    gets(c);
	for(j=0;j<=i;j++)
	{
		if(strcmp(a[j],b)==0)
		{
			strcpy(a[j],c);
					}
	}
	
	

	for(j=0;j<i;j++)
		printf("%s ",a[j]);
	printf("%s",a[i]);

}
