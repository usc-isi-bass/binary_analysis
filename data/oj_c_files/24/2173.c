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
	int sup,inf,i=0,j,max,min;
	char str[200][100],b;
	while(1)
	{scanf("%s%c",str[i],&b);
		if(b!=' '&&b!=',') break;
		else i++;
	}
	sup=strlen(str[0]);
	max=0;
	inf=strlen(str[0]);
	min=0;
	for(j=1;j<=i;j++)
	{if(strlen(str[j])>sup)
	{sup=strlen(str[j]);
	max=j;}
	if(strlen(str[j])<inf)
	{inf=strlen(str[j]);
	min=j;}
	}
	printf("%s\n%s",str[max],str[min]);
}