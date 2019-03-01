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

main()
{
	int i,j;
	char a[30];
	gets(a); 
	i=0;
	while(i<strlen(a))
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			for(j=i;a[j]>='0'&&a[j]<='9';j++)
			printf("%c",a[j]);
			printf("\n");
			i=j+1;
		}
		else i++;
	}
} 