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
	int i=0,j=0,k;
	char str[100];
	gets(str);
	while(str[i]!='\0')
		i++;
	for(i--;i>=0;i--)
	{
		while(str[i]!=' '&&i>=0)
		{
			j++;i--;
		}
		for(k=++i;k<i+j;k++)
		{
			printf("%c",str[k]);
		}
		if(i!=0)printf(" ");
		i--;
		j=0;
	}
	printf("\n");
}